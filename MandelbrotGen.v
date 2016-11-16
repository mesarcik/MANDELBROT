/*
 18- bit fixed point representation:
	17 16 15 14 .13 12 11 10 9 8 7 6 5 4 3 2 1 0
	
	[17] -> Sign bit
	[16:14] -> integer bits
	[13:0] -> fractional bits
	
	when multiplying 18x18 you get 36 bits. In order to maintain 18 bit representation you need to do some bit slicing
	35 34 33 32 31 30 29 28 .27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
   |--invalid-|-------------------------valid------------------------|----------invalid--------------|
*/





module MandelbrotGen(
		input Clk_100M,          // 100Mhz Clock input
		input  [4:0]BTNS,        // Debounced Button signals
		input  SW0,              // Used to select zoom in/out
		input  SW15,             // Used to rest to start position
		output reg [18:0] addrA, // Writing address
		output reg [11:0] dinA,  // Data to write to RAM
		output reg wea           // Write enable signal
    );

 
reg [9:0] x_count;                 // Holds horizontal position
reg signed[17:0] shift_val;        // Hold complex and real incrementals
reg signed[17:0] C_real_start;     // Starting real value
reg signed[17:0] C_imag_start;     // Starting imaginary value
reg signed [17:0] C_real;          // Current real component of C being operated on
reg signed[17:0] C_imag ;          // Current imaginary component of C being operated on
reg [11:0] iterations;             // Holds number of iterations it takes to prove classification
reg signed [17:0] Z_real;          // Current real component of Z for computations
reg signed [17:0] Z_imag;          // Current imaginary component of Z for computations
reg signed[35:0] Temp_Z_imag_real; // Temp register used for multiplication when working out next Z value
reg signed [35:0] temp_imag;       // Temp register used for working out next Z value (stores imaginary squared)
reg signed [35:0] temp_real;       // As above (real real squared)
reg signed[17:0] Z_real2;          // Maintaining binary point using bitvector-slicing
reg signed[17:0] Z_imag2;          // As above
reg signed[17:0] Z_imag2_re2_sum;  // Used to check for divergence (outside circle radius 2 centered at origin)
reg calculating;                   // Used to maintain state - 1 = iterating 0 = set up next C value.
reg init = 0;                      // Start up block. Hard-coded reset/start display
reg Count = 0;                     // Used to generate 50 Mhz clock

always @(posedge Clk_100M) begin

if (SW15 == 1)begin                // Reset to start display
	init = 0;
end


//MANIPULATION STAGE
	if (|BTNS) begin                                           // If any button is pressed, reset the writing and iteration processes
		addrA       <= 0;                                       // Reset write address
		x_count      = 0;                                       // Reset horizontal position
		iterations  <= 1;                                       // The first iteration is skipped -> f(0) = 0*0 + C = C
		calculating  = 1;                                       // Start calculation stage
		
		// PAN STAGE
		if (BTNS[0] == 1) begin                                 // Pan DOWN
		
			C_imag_start       = C_imag_start - (shift_val<<5);  // Subtract the shift_val*5 from the imaginary start value.
			
		end
		else if (BTNS[1] == 1) begin                            // Pan UP
		
			C_imag_start       = C_imag_start + (shift_val<<5) ; // Add the shift_val*5 to the imaginary start value.
	
		end 
		else if (BTNS[3] == 1) begin                            //  Pan LEFT
		
			C_real_start       = C_real_start  - (shift_val<<5); // Subtract the shift_val*5 from the real start value.
		end
		else if (BTNS[4] == 1) begin                            //  Pan RIGHT
		
			C_real_start       = C_real_start  + (shift_val<<5); // Add the shift_val*5 to the real start value.
		
		end
		// END OF PAN STAGE
		
		// ZOOM STAGE
		if (SW0 == 0) begin                                    //ZOOM OUT
		
			if(BTNS[2] == 1) begin                              // ZOOM button
				
				shift_val          = shift_val <<1;              // Scale up by 1
				C_imag_start       = C_imag_start  <<1;
				C_real_start       = C_real_start  <<1;
			end
		end else if (SW0 == 1) begin                           // ZOOM IN
		
			if(BTNS[2] == 1) begin		                         // ZOOM button
			
				shift_val          = shift_val >> 1;             // Scale down by 1 and sign extend
				C_imag_start       = C_imag_start  >>>1;
				C_real_start       = C_real_start  >>>1;
			
			end
		end
		//END ZOOM STAGE
		
		C_real           = C_real_start;                      // Assign start values of first pixel
		C_imag           = C_imag_start;  
		Z_real           = C_real_start;
		Z_imag           = C_imag_start;   
	end // END MANIPULATION STAGE
	
//INITIALISATION STAGE
	if(init ==0) begin
		x_count           = 0;
		addrA            <= 0;
		temp_imag         = 0;
		temp_real         = 0;
		shift_val         = 18'sb0000_0000_0001_0000_00; // 1/256 increments
		C_real            = 18'sb1110_1100_0000_0000_00; // -1.25 real value of first x coordinate
		C_imag            = 18'sb0000_1111_0000_0000_00; // 0.9375 imaginary value of first y coordinate
		C_real_start      = C_real;
		C_imag_start      = C_imag;
		Z_real            = C_real;
		Z_imag            = C_imag; 
		iterations       <= 1;
		Temp_Z_imag_real  = 0;                       
		Z_real2           = 0; 
		Z_imag2           = 0; 
		Z_imag2_re2_sum   = 0;
		calculating       = 1;
		init              = 1;                           
	end // END INITIALISATION STAGE
	
	
	
	
//CALCULATION & NEXT-C STAGE
	if (&Count) begin
		Count <= 0;
		
		if (addrA > 307199) begin                       // If reached end of RAM block, reset writing address
			addrA <= 0;
		end
		else begin
				/* 
					Z(n+1) = Z(n)^2 + C    -> Used to calculate if C lies in the Mandelbrot Set.
					 where Z and C are complex. For working out the next iterations Z(n+1):
					=> Z(n+1)[real] = Z(n)[real]^2 - Z(n)[imaginary]^2 + C[real]
					=> Z(n+1)[imaginary] = 2*Z(n)[real]*Z(n)[imaginary] + C[imaginary]
				*/
				// CALCULATION STAGE
		      if(calculating == 1) begin
					temp_real       = Z_real*Z_real;            // Z(n)[real]^2
					Z_real2         = temp_real[31:14];         // Maintain binary point
					temp_imag       = Z_imag*Z_imag;            // Z(n)[imaginary]^2
					Z_imag2         = temp_imag[31:14];			  // Maintain binary point
					Z_imag2_re2_sum = Z_real2 + Z_imag2;        // Add together to see if diverged
					
					if ((Z_imag2_re2_sum > (18'sb0100_0000_0000_0000_00)) || (iterations == 150)) begin  // Divergend or max iterations reached (n = 150 max)
						wea         = 1;                                        // Enable write
						if (iterations == 150) begin                            // If C lies in the set
							dinA        = 12'h000;                               // Colour Black
						end else begin
							dinA        = iterations +12'b0100_0000_0000;        // If not in the set - some color mapping involved here
						end
						
						Z_real2     = 0;                                        // Reset all registers
						Z_imag2     = 0;
						Z_imag      = 0;
						Z_real      = 0;
						calculating = 0;                                        // Start working out next C value
						
					end else begin                                             // Or if not diverged work out Z(n+1)
						Temp_Z_imag_real = Z_real*Z_imag;                       // Z(n)[real]*Z(n)[imaginary]
						Temp_Z_imag_real = Temp_Z_imag_real<<1;                 // 2*Z(n)[real]*Z(n)[imaginary]
						Z_imag           = (Temp_Z_imag_real[31:14]) + C_imag;  // Z(n+1)[imaginary] - Maintain binary point
						Z_real           = Z_real2 - Z_imag2 + C_real;          // Z(n+1)[real] = Z(n)[real]^2 - Z(n)[imaginary]^2 + C[real]
						iterations      <= iterations + 1'b1;                   // Increment number of iterations
					end
				// NEXT-C STAGE
				end if (calculating == 0) begin	
				
						C_real = C_real + shift_val;                           // Increment real co-ordinate
						
						if (x_count == 639) begin                              // If reached end of Row
							x_count = 0;
							C_imag  = C_imag - shift_val;                       // Increment imaginary co-ordinate
							C_real  = C_real_start;                             // Re-initialise the real co-ordinate
							if (addrA == 307199) begin                          // If at end of frame
								C_imag = C_imag_start;                           // Re-initialise imaginary co-ordinate
							end
						end else begin                                         // Else keep going along the current row
							x_count = x_count + 1;
						end
					calculating	= 1;                                          // Start calculating stage again
					addrA      <= addrA +1'b1;                             
					iterations <= 1;
				end		
	end 
	end else Count <= Count+ 1; 
end // END CALCULATION & NEXT-C STAGE
endmodule