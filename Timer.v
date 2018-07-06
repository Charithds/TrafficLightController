`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:28 07/06/2018 
// Design Name: 
// Module Name:    Timer 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Timer(
    input[3:0] value,
    input seconds_enabled,
    input start_timer,
    input clkin,
    output reg expired
    );
	
    reg[3:0] counter;

    initial begin
        counter = 0;
        expired = 0;
    end

    always @ (posedge clkin, posedge start_timer) begin
        if (start_timer) begin
            counter = 0;
            expired = 0;
        end
        else begin
            counter = counter + 1;
            if(counter==value) begin
                expired <= 1;
                counter <= 0;
            end
        end
    end

endmodule
