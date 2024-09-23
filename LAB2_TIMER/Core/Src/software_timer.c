/*
 * software_timer.c
 *
 *  Created on: Sep 22, 2024
 *      Author: ASUS
 */

#include "software_timer.h"

int timer_counter[10];
int timer_flag[10];

void setTimer(int index, int counter){
	timer_counter[index] = counter;
	timer_flag[index] = 0;
}

void timerRun(){
	for(int i = 0; i < 10; i++){
		if(timer_counter[i] > 0){
			timer_counter[i]--;
			if(timer_counter[i] <= 0){
			timer_flag[i] = 1;
			}
		}
	}
}
