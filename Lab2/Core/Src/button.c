/*
 * button.c
 *
 *  Created on: Oct 6, 2023
 *      Author: TVB09
 */


#include "button.h"
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

//#define NORMAL_STATE RESET
//#define PRESSED_STATE SET

int TimeOutForKeyPress =  500;
int timeDurationPress;
int flagLong= 0;

int getInput()
{
	KeyReg1= KeyReg2;
	KeyReg2= KeyReg3;
	KeyReg3= HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin);
	if (KeyReg1== KeyReg2 && KeyReg2== KeyReg3)
	{
		if (KeyReg0 != KeyReg1)
		{
			KeyReg0= KeyReg1;
			if (KeyReg0== PRESSED_STATE)
			{
				TimeOutForKeyPress= 500;
				timeDurationPress= 25;
				flagLong= 0;
				return notpress;
			}
			else
			{
				if (flagLong== 1)
				{
					return notpress;
				}
				else
				{
					if (timeDurationPress <= 15)
					{
						return shortpress;
					}
				}
			}
		}
		else  // key0== key1
		{
			if (KeyReg0== PRESSED_STATE)
			{
				if (TimeOutForKeyPress > 0)
				{
					TimeOutForKeyPress--;
					if (TimeOutForKeyPress <= 0)
					{
						flagLong= 1;
						return longpress;
					}
				}
				if (timeDurationPress > 0)
				{
					timeDurationPress--;
				}
			}
			return notpress;
		}

	}
	else
	{
		return notpress;
	}
}

