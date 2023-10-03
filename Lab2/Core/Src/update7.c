/*
 * update7seg.c
 *
 *  Created on: Oct 3, 2023
 *      Author: TVB09
 */

#include "update7.h"
#include "main.h"
#include "7seg.h"
const int maxLed= 4;
int led_buffer[4]= {1, 2, 7, 0};

void update7SEG(int index)
{
	switch (index)
	{
		case 0:
			HAL_GPIO_TogglePin(en3_GPIO_Port, en3_Pin);
			display7Seg(led_buffer[index]);
			HAL_GPIO_TogglePin(en0_GPIO_Port, en0_Pin);
			break;
		case 1:
			HAL_GPIO_TogglePin(en0_GPIO_Port, en0_Pin);
			display7Seg(led_buffer[index]);
			HAL_GPIO_TogglePin(en1_GPIO_Port, en1_Pin);
			break;
		case 2:
			HAL_GPIO_TogglePin(en1_GPIO_Port, en1_Pin);
			display7Seg(led_buffer[index]);
			HAL_GPIO_TogglePin(en2_GPIO_Port, en2_Pin);
			break;
		case 3:
			HAL_GPIO_TogglePin(en2_GPIO_Port, en2_Pin);
			display7Seg(led_buffer[index]);
			HAL_GPIO_TogglePin(en3_GPIO_Port, en3_Pin);
			break;
		default:
			break;
	}

}
