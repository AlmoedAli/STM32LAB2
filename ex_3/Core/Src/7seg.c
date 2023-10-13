/*
 * 7seg.c
 *
 *  Created on: Oct 3, 2023
 *      Author: TVB09
 */

#include "7seg.h"

void display(GPIO_PinState A, GPIO_PinState B, GPIO_PinState C, GPIO_PinState D,
		GPIO_PinState E, GPIO_PinState F, GPIO_PinState G)
{
	HAL_GPIO_WritePin(segA_GPIO_Port, segA_Pin, A);
	HAL_GPIO_WritePin(segB_GPIO_Port, segB_Pin, B);
	HAL_GPIO_WritePin(segC_GPIO_Port, segC_Pin, C);
	HAL_GPIO_WritePin(segD_GPIO_Port, segD_Pin, D);
	HAL_GPIO_WritePin(segE_GPIO_Port, segE_Pin, E);
	HAL_GPIO_WritePin(segF_GPIO_Port, segF_Pin, F);
	HAL_GPIO_WritePin(segG_GPIO_Port, segG_Pin, G);

}
void display7Seg(int num)
{
	switch (num)
	{
		case 0:
			display(0, 0, 0, 0, 0, 0, 1);
			break;
		case 1:
			display(1, 0, 0, 1,  1, 1, 1);
			break;
		case 2:
			display(0, 0, 1, 0, 0, 1, 0);
			break;

		case 3:
			display(0, 0, 0, 0, 1, 1, 0);
			break;
		case 4:
			display(1, 0, 0, 1, 1, 0, 0);
			break;
		case 5:
			display(0, 1, 0, 0, 1, 0, 0);
			break;
		case 6:
			display(0, 1, 0, 0, 0, 0, 0);
			break;
		case 7:
			display(0, 0, 0, 1, 1, 1, 1);
			break;
		case 8:
			display(0, 0, 0, 0, 0, 0, 0);
			break;
		case 9:
			display(0, 0, 0, 0, 1, 0, 0);
			break;
		default:
			display(0, 0, 0, 0, 1, 0, 0);
			break;
	}
}
