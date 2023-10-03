/*
 * buffer.c
 *
 *  Created on: Oct 4, 2023
 *      Author: TVB09
 */

#include "buffer.h"

int second= 50;
int hour= 15;
int minute= 8;
int Led_buffer[4]= {0, 0, 0, 0};

void updateClockBuffer()
{
	Led_buffer[0]= hour/10;
	Led_buffer[1]= hour%10;
	Led_buffer[2]= minute/10;
	Led_buffer[3]= minute%10;
}
