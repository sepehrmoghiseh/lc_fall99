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
---  Module Name: Window Shade Degree
---  Description: Module4: 
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module WindowShadeDegree (
	input  [3:0] tcode  , // time code    [table2 time code   ]
	input  [3:0] ulight , // user light   [light degree mode  ]
	output [3:0] wshade   // shade level  [window shade level ]
);

	reg  [3:0] wshade1;
	
	always @(tcode  or ulight) begin
		if(tcode == 4'b0001) begin
			wshade1= 4'b1111;
			end
		else if (tcode == 4'b0010) begin
				wshade1= 4'b1011;
				end
		else if (tcode== 4'b0100) begin
				wshade1=ulight;
				end
		else if(tcode==4'b1000) begin
				wshade1=4'b0000;
				end
		else begin
				wshade1=4'b0000;
				end
		end
		assign wshade=wshade1;

endmodule
