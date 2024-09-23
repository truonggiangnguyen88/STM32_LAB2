/*
 * soareare_timer.h
 *
 *  Created on: Sep 22, 2024
 *      Author: ASUS
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[10];

void setTimer(int index, int counter);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
