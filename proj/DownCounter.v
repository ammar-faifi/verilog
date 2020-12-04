`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// This module is used to count from 9-0 for the two minute digits 
// as well as loading the starting time inputs. If the inputs larger than 99 an LED error 
// will turn on and set all digits zeros. 
//////////////////////////////////////////////////////////////////////////////////


module DownCounter(input clk, reset, load, CE, [3:0] data, input STOP, output CEO, reg error, reg [3:0]count);

	assign CEO = (count == 0) && CE;
	
	always @(posedge clk)
		begin
			if(STOP) begin
			count <= 4'b0000;
			error = 0;
			end
			else if (data > 4'b1001)begin
				count <= 4'b0000;
				error = 1;
			end
			else if (load) begin
				count <= data;
				error = 0;
			end

			else if (reset || CEO)
				count <= 9;
			
			else if (CE)
				count <= count - 1;
		end
endmodule
