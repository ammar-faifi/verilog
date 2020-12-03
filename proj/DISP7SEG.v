`timescale 1ns / 1ps
module DISP7SEG(
    input clk
	
    ,input [3:0] D0
    ,input [3:0] D1
    ,input [3:0] D2
    ,input [3:0] D3

    ,input text_mode
    ,input slow
    ,input med
    ,input fast
    ,input error
    ,input wrong

    ,output [7:0] seg
    ,output [3:0] an
    );
wire [1:0] sel;
wire [4:0] Y;
wire clk_out;

wire a0, a1, a2, a3, a4;
wire b0, b1, b2, b3, b4;
wire c0, c1, c2, c3, c4;
wire d0, d1, d2, d3, d4;
wire [7:0] seg_number;

assign a4 = 0;
assign d4 = 0;
assign c4 = 0;
assign b4 = 0;

assign {a3, a2, a1, a0} = D0;
assign {b3, b2, b1, b0} = D1;
assign {c3, c2, c1, c0} = D2;
assign {d3, d2, d1, d0} = D3;

assign seg = 	text_mode & wrong ? ( sel == 2'b00 ? 8'b11111111 : sel == 2'b01 ? 8'b10101011 : sel == 2'b10 ? 8'b10100011 : 8'b10101011 ):
              text_mode & error ? ( sel == 2'b00 ? 8'b11111111 : sel == 2'b01 ? 8'b00101111 : sel == 2'b10 ? 8'b10101111 : 8'b10000110 ):
              text_mode & fast  ? ( sel == 2'b00 ? 8'b10000111 : sel == 2'b01 ? 8'b10010010 : sel == 2'b10 ? 8'b10001000 : 8'b10001110 ):
              text_mode & med   ? ( sel == 2'b00 ? 8'b10100001 : sel == 2'b01 ? 8'b10100011 : sel == 2'b10 ? 8'b10100011 : 8'b10010000 ):
              text_mode & slow  ? ( sel == 2'b00 ? 8'b11111111 : sel == 2'b01 ? 8'b01000000 : sel == 2'b10 ? 8'b11000111 : 8'b10010010 ):
              seg_number;

bcd7seg bcd7seg (.Y(Y), .disp(seg_number));

slowclock slowclock (.clk_in(clk), .clk_out(clk_out));

my_counter my_counter (.clk(clk_out), .Q(sel));

mux4to1 mux4to1 (.A({a4, a3, a2, a1, a0}), .B({b4, b3, b2, b1, b0}), .C({c4, c3, c2, c1, c0}), .D({d4, d3, d2, d1, d0}), .sel(sel), .Y(Y));

decoder2to4 decoder2to4 ( .en(sel), .an(an));

endmodule
////////////////////////////////////
module bcd7seg(input[4:0] Y, output reg[7:0] disp);
	always@(Y)	begin
		case(Y[3:0])
			00:       disp={!Y[4], 7'b1000000};
			01:       disp={!Y[4], 7'b1111001};
			02:       disp={!Y[4], 7'b0100100};
			03:       disp={!Y[4], 7'b0110000};
			04:       disp={!Y[4], 7'b0011001};
			05:       disp={!Y[4], 7'b0010010};
			06:       disp={!Y[4], 7'b0000010};
			07:       disp={!Y[4], 7'b1111000};
			08:       disp={!Y[4], 7'b0000000};
			09:       disp={!Y[4], 7'b0010000};
			10:       disp={!Y[4], 7'b0001000};
			11:       disp={!Y[4], 7'b0000011};
			12:       disp={!Y[4], 7'b1000110};
			13:       disp={!Y[4], 7'b0100001};
			14:       disp={!Y[4], 7'b0000110};
			default:  disp={!Y[4], 7'b0001110};
		endcase
	end
endmodule
////////////////////////////////////
module slowclock (clk_in, clk_out);
input clk_in; output clk_out;
reg clk_out;
reg [25 : 0] period_count;

always @ (posedge clk_in)
	if (period_count != 2500 - 1)
	begin
		period_count <= period_count + 1;
		clk_out <= 0;
	end
	else
	begin
		period_count <= 0;
		clk_out <= 1;
	end
endmodule
////////////////////////////////////
module my_counter( clk, Q );
input clk;
output [1:0] Q;
reg [1:0] temp;

always @(posedge clk)
begin
	temp <= temp + 1;
end

assign Q = temp;

endmodule
////////////////////////////////////
module mux4to1( input [4:0] A, B, C, D, input [1:0] sel, output [4:0] Y);
assign Y = (sel==0)?A : (sel==1)?B : (sel==2)?C : D;
endmodule
////////////////////////////////////
module decoder2to4 (input [1:0] en, output reg [3:0] an);
always@(en)
begin
	case (en)
		0: an=4'b1110;
		1: an=4'b1101;
		2: an=4'b1011;
		3: an=4'b0111;
	endcase
end
endmodule
////////////////////////////////////
