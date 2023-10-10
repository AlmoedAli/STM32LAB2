/*
 * updateMatrix.h
 *
 *  Created on: Oct 5, 2023
 *      Author: TVB09
 */

#ifndef INC_UPDATEMATRIX_H_
#define INC_UPDATEMATRIX_H_

#include "main.h"
extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
extern uint8_t matrix_buffer[8];
extern uint8_t character[][8];
extern uint16_t ROW[8];
extern uint16_t ENM[8];

void updateLEDMatrix(int index);
void displayLed8x8();

#endif /* INC_UPDATEMATRIX_H_ */
