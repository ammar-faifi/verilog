`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
module mod06 (input clk, reset, CE, output reg [3:0] counter, output CEO);

	assign CEO = (counter == 0) && CE;

	always @(posedge clk) begin
		if(reset)
			counter <= 0;
		else if (CEO)
			counter <= 5;
		else if (CE)
			counter <= counter - 1;
		end
		
endmodule 