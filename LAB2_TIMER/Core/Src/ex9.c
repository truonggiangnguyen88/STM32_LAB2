/*
 * ex9.c
 *
 *  Created on: Sep 29, 2024
 *      Author: ASUS
 */

#include "ex9.h"
#include <stdint.h>


const int MAX_LED_MATRIX = 8;
 int index_led_matrix = 0;
 uint8_t matrix_buffer[8] = {0x18, 0x3C, 0x66, 0x66, 0x7E, 0x7E, 0x66, 0x66};

 void clearColumn() {
     HAL_GPIO_WritePin(GPIOA, ENM0_Pin | ENM1_Pin | ENM2_Pin | ENM3_Pin | ENM4_Pin | ENM5_Pin | ENM6_Pin | ENM7_Pin, GPIO_PIN_RESET);
 }

 void setRow(int index){
	    HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, (matrix_buffer[index] >> 0) & 0x01);
	    HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, (matrix_buffer[index] >> 1) & 0x01);
	    HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, (matrix_buffer[index] >> 2) & 0x01);
	    HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, (matrix_buffer[index] >> 3) & 0x01);
	    HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, (matrix_buffer[index] >> 4) & 0x01);
	    HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, (matrix_buffer[index] >> 5) & 0x01);
	    HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, (matrix_buffer[index] >> 6) & 0x01);
	    HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, (matrix_buffer[index] >> 7) & 0x01);
 }


 void updateLEDMatrix(int index){
	 switch(index){
	 	 case 0:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 1:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 2:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 3:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 4:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 5:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 6:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 case 7:
	 		 clearColumn();
	 		 HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, GPIO_PIN_SET);
	 		 setRow(index);
	 		 break;
	 	 default:
	 		 break;
	 }
 }

 void shiftLeft(uint8_t *buffer) {
     for (int i = 0; i < 8; i++) {
    	 uint8_t leftBit = (buffer[i] & 0x80) >> 7;
         buffer[i] <<= 1;
         buffer[i] |= leftBit;
     }
 }

