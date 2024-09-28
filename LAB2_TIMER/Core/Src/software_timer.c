/*
 * software_timer.c
 *
 *  Created on: Sep 22, 2024
 *      Author: ASUS
 */

#include "software_timer.h"

int timer_counter[2];
int arr_copy[2];
int timer_flag[2];
int min_val = 999999;
int min_index = 0;
int flag_min = 1;

void setTimer(int index, int counter){
	timer_counter[index] = counter;
	timer_flag[index] = 0;
}

void timerRun(){
	for(int i = 0; i < 2; i++){
		if(timer_counter[i] > 0){
			timer_counter[i]--;
			if(timer_counter[i] <= 0){
			timer_flag[i] = 1;
			}
		}
	}
}

//void timerRun(){
//	if(flag_min == 1){
//    for (int i = 0; i < 2; i++) {
//        if (timer_counter[i] < min_val) {
//                    min_val = timer_counter[i];
//                    min_index = i;
//        }
//    }
//    flag_min = 0;
//    }
//
//
//		if(timer_counter[min_index] > 0){
//			timer_counter[min_index]--;
//			if(timer_counter[min_index] <= 0){
//			timer_flag[min_index] = 1;
//			//timer_counter[min_index] = arr_copy[min_index];
//			flag_min = 1;
//		    for(int i = 0; i < 2; i++){
//		    	if(i != min_index) timer_counter[i] -= min_val;
//		    }
//			}
//		}
//
//}
