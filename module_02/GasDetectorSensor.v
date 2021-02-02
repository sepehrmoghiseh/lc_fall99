/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 
--  Student Name: 
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: Gas Detector Sensor
---  Description: Module2:
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module GasDetectorSensor (
	input        arst     , // async reset
	input        clk      , // clock posedge
	input        din      , // input data 
	output  [2:0] dout       // output data
);

	/* write your code here */
	reg [4:0] state;
	reg [2:0] dout2;
	
	parameter A = 5'b0000, B = 5'b00001, C = 5'b00010, D = 5'b00011, E = 5'b00100, F = 5'b00101, G = 5'b00110, H = 5'b00111, I = 5'b01000,
			J = 5'b01001, K = 5'b01010, L = 5'b01011, M = 5'b01100, N = 5'b01101, O = 5'b01110, P = 5'b01111, Q = 5'b10001, R = 5'b10010, S = 5'b10011,
			T = 5'b10100, U = 5'b10101, V = 5'b10110, W = 5'b10111, X = 5'b11000, Y = 5'b11001, Z = 5'b11010, FIN = 5'b11011;
	
	always @ (posedge clk or posedge arst)
		if (arst)
		begin
			state = A;
			dout2 = 3'b000;
		end
		else 
		case (state)
			A: if (din)
				begin
					state = B;
					dout2 = 3'b000;
				end
				else
				begin
					state = A;
					dout2 = 3'b000;
				end
			B: if (din)
				begin
					state = B;
					dout2 = 3'b000;
				end
				else
				begin
					state = C;
					dout2 = 3'b000;
				end
			C: if (din)
				begin
					state = K;
					dout2 = 3'b000;
				end
				else
				begin
					state = D;
					dout2 = 3'b000;
				end
			D: if (din)
				begin
					state = E;
					dout2 = 3'b000;
				end
				else
				begin
					state = A;
					dout2 = 3'b000;
				end
			E: if (din)
				begin
					state = B;
					dout2 = 3'b000;
				end
				else
				begin
					state = F;
					dout2 = 3'b000;
				end
			F: if (din)
				begin
					state = K;
					dout2 = 3'b000;
				end
				else
				begin
					state = G;
					dout2 = 3'b000;
				end
			G: if (din)
				begin
					state = H;
					dout2 = 3'b000;
				end
				else
				begin
					state = A;
					dout2 = 3'b000;
				end
			H: if (din)
				begin
					state = B;
					dout2 = 3'b000;
				end
				else
				begin
					state = I;
					dout2 = 3'b000;
				end
			I: if (din)
				begin
					state = K;
					dout2 = 3'b000;
				end
				else
				begin
					state = J;
					dout2 = 3'b100;
				end
			J: if (din)
				begin
					state = E;
					dout2 = 3'b000;
				end
				else
				begin
					state = A;
					dout2 = 3'b000;
				end
			K: if (din)
				begin
					state = U;
					dout2 = 3'b000;
				end
				else
				begin
					state = L;
					dout2 = 3'b000;
				end
			L: if (din)
				begin
					state = M;
					dout2 = 3'b000;
				end
				else
				begin
					state = D;
					dout2 = 3'b000;
				end
			M: if (din)
				begin
					state = U;
					dout2 = 3'b000;
				end
				else
				begin
					state = N;
					dout2 = 3'b000;
				end
			N: if (din)
				begin
					state = M;
					dout2 = 3'b000;
				end
				else
				begin
					state = O;
					dout2 = 3'b000;
				end
			O: if (din)
				begin
					state = P;
					dout2 = 3'b000;
				end
				else
				begin
					state = A;
					dout2 = 3'b000;
				end
			P: if (din)
				begin
					state = B;
					dout2 = 3'b000;
				end
				else
				begin
					state = Q;
					dout2 = 3'b000;
				end
			Q: if (din)
				begin
					state = K;
					dout2 = 3'b000;
				end
				else
				begin
					state = R;
					dout2 = 3'b000;
				end
			R: if (din)
				begin
					state = S;
					dout2 = 3'b000;
				end
				else
				begin
					state = A;
					dout2 = 3'b000;
				end
			S: if (din)
				begin
					state = T;
					dout2 = 3'b010;
				end
				else
				begin
					state = I;
					dout2 = 3'b000;
				end
			T: if (din)
				begin
					state = B;
					dout2 = 3'b000;
				end
				else
				begin
					state = C;
					dout2 = 3'b000;
				end
			U: if (din)
				begin
					state = V;
					dout2 = 3'b000;
				end
				else
				begin
					state = C;
					dout2 = 3'b000;
				end
			V: if (din)
				begin
					state = B;
					dout2 = 3'b000;
				end
				else
				begin
					state = W;
					dout2 = 3'b000;
				end
			W: if (din)
				begin
					state = X;
					dout2 = 3'b000;
				end
				else
				begin
					state = D;
					dout2 = 3'b000;
				end
			X: if (din)
				begin
					state = U;
					dout2 = 3'b000;
				end
				else
				begin
					state = Y;
					dout2 = 3'b000;
				end
			Y: if (din)
				begin
					state = Z;
					dout2 = 3'b000;
				end
				else
				begin
					state = D;
					dout2 = 3'b000;
				end
			Z: if (din)
				begin
					state = U;
					dout2 = 3'b000;
				end
				else
				begin
					state = FIN;
					dout2 = 3'b001;
				end
			FIN: if (din)
				begin
					state = M;
					 dout2 = 3'b000;
				end
				else
				begin
					state = O;
					dout2 = 3'b000;
				end
			endcase
	assign dout=dout2;

endmodule