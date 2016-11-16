`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:42:35 05/15/2016
// Design Name:   MandelbrotGen
// Module Name:   /home/bluelabuser/YODA_14-May_save/MandelbrotTest.v
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

module MandelbrotTest;

	// Inputs
	reg Clk_100M;

	// Outputs
	wire [18:0] addrA;
	wire [11:0] dinA;
	wire wea;

	// Instantiate the Unit Under Test (UUT)
	MandelbrotGen uut (
		.Clk_100M(Clk_100M), 
		.addrA(addrA), 
		.dinA(dinA), 
		.wea(wea)
	);

	always begin
	#5 Clk_100M = ~Clk_100M;
	end

	initial begin
		// Initialize Inputs
		Clk_100M <= 0;
	

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

