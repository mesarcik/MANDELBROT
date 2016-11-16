
module VGA_Driver(
	input clk,                  // Input clock signal 100Mhz
	output reg hsync,           // Horizontal Sync signal
	output reg vsync,           // Vertical Sync signal
	output reg [9:0] hcount,    // Passed to Main Module (YoDawg) for housekeeping
	output reg [9:0] vcount     // As above.
);
	 
reg [1:0]Count;                // Used to generate 25Mhz clock
reg ven = 0;                   // Set high when hcount reaches 799 - enables vcount to increment
reg [9:0]hc;                   // Housekeeping - keep track of horizontal pixel position
reg [9:0]vc;                   // Keep track of verical pixel row position

always @(posedge clk) begin
Count <= Count + 1'b1;

if(&Count) begin 
	hcount = hc;                  // Pass to YoDawg
	vcount = vc;               
	Count <= 0;
	
	if (hc == 799) begin          // End of back porch
		ven <= 1'b1;               // Enable vc to increment 
		hc  <= 0;		            // Reset to beginning of the row
	end
	else begin
		hc  <= hc + 1'b1;          // Or keep moving along the row
		ven <= 0;                  // Block vc from incrementing
	end
	
	if (hc < 96) begin            // Horizontal Sync pulse kept LOW for 96 "pixels"
		hsync <= 1'b0;
	end
	else begin 
		hsync <= 1'b1;              // Kept HIGH for the rest of the row
	end 
	
   if (ven == 1'b1) begin         
		if (vc == 520) begin       // End of display back porch
			vc <= 0;                // Rest to beginning of the frame
		end
	else begin
		vc <= vc + 1'b1;           // Or kep moving down the vertical dimension of the display
	end
	
	if (vc < 2) begin             // Vertical Sync pulse kept LOW for 2 "rows"
		vsync <= 1'b0;
	end
	else begin 
		vsync <= 1'b1;             // Kept HIGH for the rest of the display
	end 
end

end

end


endmodule