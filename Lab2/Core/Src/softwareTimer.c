/*
 * softwareTimer.c
 *
 *  Created on: Oct 2, 2023
 *      Author: TVB09
 */


#include "softwareTimer.h"

int counter;
int flag;

void runTimer()
{
	if (counter > 0)
	{
		counter--;
		if (counter <= 0)
		{
			flag= 1;
		}
	}
}

void setTimer(int duration)
{
	counter= duration;
	flag= 0;
}
