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

module ActiveLamps (
	input  [3:0] tcode  , // time code    [table2 time code   ]
	input  [3:0] ulight , // user light   [light degree mode  ]
    input  [3:0] lenght     , // room length  [square room lenght ]
	output [3:0] active_lights  // number of active light
);
	reg  [3:0] active_lights1;
	wire [3:0] four=4'b0100;
	wire [7:0] s=lenght *lenght;
	wire [7:0] p=lenght * four;
	wire [3:0] sp=s/p;
	always @(tcode or lenght or ulight or sp) begin
		if(tcode == 4'b0001) begin
			active_lights1= 4'b0000;
			end
		else if (tcode == 4'b0010) begin
				active_lights1= 4'b0000;
				end
		else if (tcode== 4'b0100) begin
				active_lights1=sp;
				end
		else if(tcode==4'b1000) begin
				active_lights1=ulight;
				end
		else begin
				active_lights1=4'b0000;
				end
		end
		assign active_lights=active_lights1;

endmodule
