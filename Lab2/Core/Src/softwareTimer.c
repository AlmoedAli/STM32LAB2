/*
 * softwareTimer.c
 *
 *  Created on: Oct 3, 2023
 *      Author: TVB09
 */

#include "softwareTimer.h"

int counter1;
int counter2;
int flag1;
int flag2;

void runTimer()
{
	if (counter1 > 0)
	{
		counter1--;
		if (counter1 <= 0)
		{
			flag1= 1;
		}
	}
	if (counter2 > 0)
	{
		counter2--;
		if (counter2 <= 0)
		{
			flag2= 1;
		}
	}
}

void setTimer1(int duration)
{
	counter1= duration;
	flag1= 0;
}

void setTimer2(int duration)
{
	counter2= duration;
	flag2= 0;
}
