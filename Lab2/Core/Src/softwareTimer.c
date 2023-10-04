/*
 * softwareTimer.c
 *
 *  Created on: Oct 3, 2023
 *      Author: TVB09
 */

#include "softwareTimer.h"

int counter1;
int counter2;
int counter3;
int flag1;
int flag2;
int flag3;

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
	if (counter3 > 0)
	{
		counter3--;
		if (counter3 <= 0)
		{
			flag3= 1;
		}
	}
}

void setTimer3(int duration)
{
	counter3= duration;
	flag3= 0;
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
