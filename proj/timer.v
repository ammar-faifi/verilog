`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module timer(input clk, reset, load, CE, [3:0] I1, I0, output LED,  [7:0]seg, [3:0]an);

	wire [3:0] D3, D2, D1, D0;
	wire [26:0] counter;
	wire CEO, CEO1, CEO2, CEO3;
	wire zero1, zero0;
	wire clk_1hz;
	assign LED = (CEO1 & CEO2 & CEO3); 
	
	assign S0 = (&(~I0))? ( |I1? 4'b1001 : 0) : (I0-1);
	assign S1 = (&(~I0))? (I1-1) : I1;
	
	//seconds, with no inputs
	mod10 s0 (clk, reset, CE, D0, CEO1);
	mod06 s1 (clk, reset, CEO1, D1, CEO2);
	
	//minuites, it can take an inputs 
	DownCounter m0 (clk, reset, load, CEO2, S0, CEO3, D2);
	DownCounter m1 (clk, reset, load, CEO3, S1  , CEO, D3);

	DISP7SEG ssd (clk, D0, D1, D2, D3, text_mode, slow, med, fast, error, wrong, seg, an);



	//this is only for FPGA Board
	onehz mHz(clk, reset, CE, counter, clk_1hz);
	
endmodule 