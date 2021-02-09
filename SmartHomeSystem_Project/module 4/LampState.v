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
---  Module Name: Active Lights
---  Description: Module4: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module LampState (
	input  [ 3:0] active_lights , // number of active light
	output[15:0] lights_state    // state of lights is on
);
	reg [15:0] w;
	assign lights_state = w;

	always @(active_lights) begin

		w[0] = ~(active_lights == 4'b0000);
		w[1] = ~(active_lights == 4'b0001) & w[0];
		w[2] = ~(active_lights == 4'b0010) & w[1];
		w[3] = ~(active_lights == 4'b0011) & w[2];
		w[4] = ~(active_lights == 4'b0100) & w[3];
		w[5] = ~(active_lights == 4'b0101) & w[4];
		w[6] = ~(active_lights == 4'b0110) & w[5];
		w[7] = ~(active_lights == 4'b0111) & w[6];
		w[8] = ~(active_lights == 4'b1000) & w[7];
		w[9] = ~(active_lights == 4'b1001) & w[8];
		w[10] = ~(active_lights == 4'b1010) & w[9];
		w[11] = ~(active_lights == 4'b1011) & w[10];
		w[12] = ~(active_lights == 4'b1100) & w[11];
		w[13] = ~(active_lights == 4'b1101) & w[12];
		w[14] = ~(active_lights == 4'b1110) & w[13];
		w[15] = ~(active_lights == 4'b1111) & w[14];
	end
endmodule
