`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module timer(input clk, reset, load, CE, [3:0] I3, I2, output LED, ErrorLED, [7:0]seg, [3:0]an);

	wire [3:0] D3, D2, D1, D0, S2, S3;
	wire [26:0] counter;
	wire CEO, CEO1, CEO2, CEO3;
	wire zero3, zero2;
	wire clk_1hz;
	
	assign S2 = (&(~I2))? ( |I3? 4'b1001 : 0) : (I2-1);
	assign S3 = (&(~I2))? (I3-1) : I3;
	assign LED = (CEO1 & CEO2 & CEO3 & ~ErrorLED);
	assign ErrorLED = Error1 || Error2;
	
	//seconds, with no inputs
	mod10 s0 (clk, reset, ~LED&CE, D0, CEO1);
	mod06 s1 (clk, reset, CEO1, D1, CEO2);
	
	//minuites, it can take an inputs 
	DownCounter m0 (clk, reset, load, CEO2, S2, CEO3, Error1, D2);
	DownCounter m1 (clk, reset, load, CEO3, S3  , CEO, Error2, D3);


	DISP7SEG ssd (clk, D0, D1, D2, D3, text_mode, slow, med, fast, error, wrong, seg, an);



	//this is only for FPGA Board
	onehz mHz(clk, reset, CE, counter, clk_1hz);
	
endmodule  