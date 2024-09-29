/*
 * ex9.h
 *
 *  Created on: Sep 29, 2024
 *      Author: ASUS
 */

#ifndef INC_EX9_H_
#define INC_EX9_H_
#include "main.h"
extern const int  MAX_LED_MATRIX;
extern int index_led_matrix;
void  updateLEDMatrix(int index);
void clearColumn();
void setRow(int index);
#endif /* INC_EX9_H_ */
