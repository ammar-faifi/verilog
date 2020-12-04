`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module mod10 (input clk, reset, CE, stop, output reg [3:0] counter, output CEO);

	assign CEO = (counter == 0) && CE;

	always @(posedge clk) begin
		if(reset || stop)
			counter <= 0;
		else if (CEO)
			counter <= 9;
		else if (CE)
			counter <= counter - 1;
		end
		
endmodule 