`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: UCT Elec Eng
// Engineer: Jonathan Malin, Misha Mesarcik, Brandon Joffe
// 
// Create Date:    14:21:10 04/19/2016 
// Design Name: 
// Module Name:    YoDawg 
// Project Name:   Mandelorian Mandelbrots
// Target Devices: Nexys 4 dev board / Artix 7
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module YoDawg(
input Clk_100M,              // 100Mhz clock
input [4:0]BUTTONS,          // All 5 push buttons
input SW0,                   // Used to switch between zoom-in and zoom-out
input SW15,                  // Reset the display to start screen
output hsync,                // VGA control signal
output vsync,                // VGA control signal 2
output reg[11:0]RGB,         // RGB data output to display
output reg LD0               // Used to indicate zoom-in or zoom-out
);

wire [9:0]hcount;            // Used to know which pixel in a row the display is currently on
wire [9:0]vcount;            // Used to know which row of pixels the display is currently on
reg [1:0]Count;              // Used to reduce clock speed for reading RAM to keep up with VGA driver (25 Mhz)
reg [4:0]BTNS;               // Used to store the debounced states of the push buttons
// Debounce states
wire NextStateDown;
reg FeedbackDown;
wire NextStateUp;
reg FeedbackUp;
wire NextStateZoom;
reg FeedbackZoom;
wire NextStateLeft;
reg FeedbackLeft;
wire NextStateRight;
reg FeedbackRight;
// RAM stuff - Port A for writing, B for reading
wire [11:0]doutA;            // Not used
wire [11:0]doutB;            // Output data port send to RGB output
reg [11:0]dinB;              // Not used
wire [11:0]dinA;             // used by Mandelbrot Module to write data in
reg [18:0] addrB = 307199;   // Used to read data address
wire [18:0] addrA;           // Used by Mandelbrot Module to select write address
wire wea;                    // Used by Mandelbrot Module to enable write
reg web;                     // Not used, always LOW
// End of ram stuff

// Mandelbrot Module - iterates over the complex plane
MandelbrotGen MandelbrotGen0(Clk_100M,BTNS,SW0,SW15,addrA,dinA,wea);

// VGA Driver Module - Controls VGA display at 480x640
VGA_Driver Vga_Driver0(Clk_100M,hsync,vsync,hcount,vcount); 

// RAM module - Dual port RAM, 307 200 addressable memory locations, each 12-bits wide. (excuse the name!)
best_ram_eva best_ram_eva0(Clk_100M,wea,addrA,dinA,doutA,Clk_100M,web,addrB,dinB,doutB);

// Debouncing Modules
Debounce Down_Debouncer (Clk_100M,BUTTONS[0],NextStateDown);  
Debounce Up_Debouncer (Clk_100M,BUTTONS[1],NextStateUp); 
Debounce Zoom_Debouncer (Clk_100M,BUTTONS[2],NextStateZoom); 
Debounce Left_Debouncer (Clk_100M,BUTTONS[3],NextStateLeft); 
Debounce Right_Debouncer (Clk_100M,BUTTONS[4],NextStateRight); 



always @(posedge Clk_100M) begin
// Debounce DOWN
if ((FeedbackDown == 0)&&(NextStateDown == 1 )) begin 
	FeedbackDown = NextStateDown;
	BTNS[0]      = 1;
 end
 else begin 
	FeedbackDown = NextStateDown;
	BTNS[0]      = 0;
 end
 
 // Debounce UP
 if ((FeedbackUp == 0)&&(NextStateUp == 1 )) begin 
	FeedbackUp = NextStateUp;
	BTNS[1]    = 1;
 end
 else begin 
	FeedbackUp = NextStateUp;
	BTNS[1]    = 0;
 end
 
 // Debounce ZOOM
 if ((FeedbackZoom == 0)&&(NextStateZoom == 1 )) begin 
	FeedbackZoom = NextStateZoom;
	BTNS[2]      = 1;
 end
 else begin 
	FeedbackZoom = NextStateZoom;
	BTNS[2]      = 0;
 end
 
 // Debounce LEFT
 if ((FeedbackLeft == 0)&&(NextStateLeft == 1 )) begin 
	FeedbackLeft = NextStateLeft;
	BTNS[3]      = 1;
 end
 else begin 
	FeedbackLeft = NextStateLeft;
	BTNS[3]      = 0;
 end
 
 // Debounce RIGHT
 if ((FeedbackRight == 0)&&(NextStateRight == 1 )) begin 
	FeedbackRight = NextStateRight;
	BTNS[4]       = 1;
 end
 else begin 
	FeedbackRight = NextStateRight;
	BTNS[4]       = 0;
 end

// Turn LDO on/off
if (SW0 == 0) begin
	LD0 = 0;
end else 
if (SW0 == 1) begin
	LD0 = 1;
end

// Reset display
if (|BUTTONS) begin // If any of the buttons are pressed
	Count<=0;
	addrB<=0;
end

if (SW15) begin // If SW15 is HIGH
	Count<=0;
	addrB<=0;
end

// Read from memory 
Count <= Count + 1'b1;
if (&Count) begin
	Count <=0; 
	if ((vcount == 31) &&(hcount == 143)) begin // First Pixel in the display
	addrB <= 0;
	end
	if ((vcount > 31 ) && (vcount < 512) && (143 < hcount) && (hcount < 784)) begin // All other pixels
		if(addrB < 307199) begin
			addrB <= addrB + 1;  // Increment through memory
			RGB   <= doutB;      // Pass RGB data to display
		end 
	end else RGB <= 0;         // If not in addressable video, pass nothing
end	
end
endmodule