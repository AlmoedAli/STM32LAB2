/*
 * 7seg.h
 *
 *  Created on: Oct 2, 2023
 *      Author: TVB09
 */

#ifndef INC_7SEG_H_
#define INC_7SEG_H_
#include "main.h"

void display(GPIO_PinState A, GPIO_PinState B, GPIO_PinState C, GPIO_PinState D,
		GPIO_PinState E, GPIO_PinState F, GPIO_PinState G);
void display7Seg(int num);


#endif /* INC_7SEG_H_ */
