`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:19:15 05/15/2016
// Design Name:   MandelbrotGen
// Module Name:   /home/bluelabuser/YODA_14-May_save/MandelBrotTest.v
// Project Name:  YODA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MandelbrotGen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MultiplierTest;

	// Inputs
	reg Clk_100M;
	reg signed [10:0] a;
	reg signed[10:0] b;
	reg ce;
	// Outputs

	wire signed [21:0] p;

	// Instantiate the Unit Under Test (UUT)
	signed_multiplier uut (
		.clk(Clk_100M), 
		.a(a), 
		.b(b), 
		.ce(ce),
		.p(p)
	);
	always begin
	#5 Clk_100M = ~Clk_100M;
	end

	initial begin
		// Initialize Inputs
		Clk_100M=0;

		// Wait 100 ns for global reset to finish
		#100;
		ce<=1;
		a = 11'b010_10000000;
		b = 11'b111_10000000;
				
        
		// Add stimulus here

	end
      
endmodule

