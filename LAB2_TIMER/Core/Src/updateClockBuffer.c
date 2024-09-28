/*
 * updateClockBuffer.c
 *
 *  Created on: Sep 29, 2024
 *      Author: ASUS
 */

#include "updateClockBuffer.h"
#include "update7SEG.h"

void updateClockBuffer(int hour, int minute){
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = minute/10;
	led_buffer[3] = minute%10;

}
