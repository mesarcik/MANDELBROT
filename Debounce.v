`timescale 1ns / 1ps
 

module Debounce(
 input Clk,                // Input clock signal
 input BTN,
 output reg 	 NextState  // Output debounced signal (delayed)
     );
	  
reg  [26:0] Counter;
reg block=0;

always @(posedge Clk) begin
if (block == 1'b1) Counter <= Counter + 1'b1;
if ((NextState != BTN) && (block ==0)) begin
	block <= 1'b1;
	NextState <= BTN;
end
if(Counter == 2000000)  begin
	block <=0;
	Counter <=0;
end
end



endmodule
