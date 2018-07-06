`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:06:08 07/06/2018 
// Design Name: 
// Module Name:    FSM 
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
module FSM(
    input Walking_Register,
    input Traffic_Sensor,
    input Expired,
	//input Prog_Sync,
	input reset,
	output reg Walking_Register_reset,
    output reg Start_Timer,
	output reg[6:0] Traffic_Lights,
    input clock
    );
	
	reg[6:0] light_signals;
	
	reg[2:0] present_state, next_state;
	
	parameter STATE_MAIN_GREEN_INITIAL = 0;
	parameter STATE_MAIN_GREEN_TRAFFIC_OFF = 1;
	parameter STATE_MAIN_GREEN_TRAFFIC_ON = 2;
	parameter STATE_MAIN_YELLOW = 3;
	parameter STATE_WALKING = 4;
	parameter STATE_SIDE_GREEN_INITIAL = 5;
	parameter STATE_SIDE_GREEN_TRAFFIC_ON = 6;
	parameter STATE_SIDE_YELLOW = 7;

	reg[0:2] interval_select;

	parameter BASE_INTERVAL = 2'b00 ;
	parameter EXT_INTERVAL = 2'b01 ;
	parameter YEL_INTERVAL = 2'b10 ;

	initial begin
		interval_select = 0;
		present_state = 0;
		next_state = 0;
		light_signals = 0;
		Walking_Register_reset <= 1;
		Start_Timer = 0;
		Traffic_Lights <= 0;
	end
	
	// state transition logic
	always @ (present_state, Walking_Register, Traffic_Sensor) begin
		case (present_state)

			STATE_MAIN_GREEN_INITIAL: begin
				if (Traffic_Sensor) begin
					next_state <= STATE_MAIN_GREEN_TRAFFIC_ON;
				end 
				else begin
					next_state <= STATE_MAIN_GREEN_TRAFFIC_OFF;
				end
			end

			STATE_MAIN_GREEN_TRAFFIC_ON, STATE_MAIN_GREEN_TRAFFIC_OFF: begin
				next_state <= STATE_MAIN_YELLOW;
			end

			STATE_MAIN_YELLOW: begin
				if (Walking_Register) begin
					next_state <= STATE_WALKING;
				end
				else begin
					next_state <= STATE_SIDE_GREEN_INITIAL;
				end
			end

			STATE_WALKING: begin
				next_state <= STATE_SIDE_GREEN_INITIAL;
			end

			STATE_SIDE_GREEN_INITIAL: begin
				if (Traffic_Sensor) begin
					next_state <= STATE_SIDE_GREEN_TRAFFIC_ON;
				end
				else begin
					next_state <= STATE_SIDE_YELLOW;
				end
			end

			STATE_SIDE_GREEN_TRAFFIC_ON: begin
				next_state <= STATE_SIDE_YELLOW;
			end

			STATE_SIDE_YELLOW: begin
				next_state <= STATE_MAIN_GREEN_INITIAL;
			end
			default: begin
				next_state <= STATE_MAIN_GREEN_INITIAL;
			end

		endcase
	end
	
	// state and clock sync
	always @ (posedge clock, posedge Expired) begin
		
		// if (reset == 0) begin
		// 	present_state <= STATE_MAIN_GREEN_INITIAL;
		// 	Start_Timer <= 1;
		// 	Traffic_Lights <= light_signals;
		// end
		
		if (Expired) begin
			present_state <= next_state;
			Start_Timer <= 1;
			Traffic_Lights <= light_signals;
			if (present_state == STATE_WALKING)
				Walking_Register_reset <= 0;
			if (present_state == STATE_SIDE_GREEN_INITIAL)
				Walking_Register_reset <= 1;
		end
		
		else begin
			Start_Timer <= 0;
		end
	end
	
	// state output generator
	always @ (present_state) begin
		case(present_state)
			STATE_MAIN_GREEN_INITIAL, STATE_MAIN_GREEN_TRAFFIC_OFF, STATE_MAIN_GREEN_TRAFFIC_ON:
				light_signals <= 7'b001_100_0; //Rm, Ym, Gm, Rs, Ys, Gs, W
			STATE_MAIN_YELLOW:
				light_signals <= 7'b010_100_0; //Rm, Ym, Gm, Rs, Ys, Gs, W
			STATE_WALKING:
				light_signals <= 7'b100_100_1; //Rm, Ym, Gm, Rs, Ys, Gs, W
			STATE_SIDE_GREEN_INITIAL, STATE_SIDE_GREEN_TRAFFIC_ON:
				light_signals <= 7'b100_001_0; //Rm, Ym, Gm, Rs, Ys, Gs, W
			STATE_SIDE_YELLOW:
				light_signals <= 7'b100_010_0; //Rm, Ym, Gm, Rs, Ys, Gs, W
		endcase
	end
	
	// select the timer based on the next state
	always @ (next_state) begin
		case(next_state)
			STATE_MAIN_GREEN_INITIAL, STATE_MAIN_GREEN_TRAFFIC_OFF, STATE_SIDE_GREEN_INITIAL: begin
				interval_select <= BASE_INTERVAL;
			end
			STATE_MAIN_GREEN_TRAFFIC_ON, STATE_WALKING, STATE_SIDE_GREEN_TRAFFIC_ON: begin
				interval_select <= EXT_INTERVAL;
			end
			STATE_MAIN_YELLOW, STATE_SIDE_YELLOW: begin
				interval_select <= YEL_INTERVAL;
			end
		endcase
	end
endmodule
