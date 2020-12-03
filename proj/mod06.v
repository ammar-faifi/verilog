`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:49:26 11/26/2020 
// Design Name: 
// Module Name:    mod06 
// Project Name: 
// Target Devices: 
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
module mod06 (input clk, reset, CE, output reg [3:0] counter, output CEO);

	assign CEO = (counter == 0) && CE;

	always @(posedge clk) begin
		if (reset || CEO)
			counter <= 5;
		else if (CE)
			counter <= counter - 1;
		end
		
endmodule 