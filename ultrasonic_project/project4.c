/*
 * project4.c
 *
 *  Created on: Oct 14, 2021
 *      Author: youssef
 */

#include "lcd.h"
#include "icu.h"
#include <avr/io.h> /* To use the SREG register */
#include "ultrasonic.h"
#include <util/delay.h>


int main(void)
{
	    Ultrasonic_init();

	    Icu_ConfigType Icu_Config = {F_CPU_8,RISING}; //initialize the ICU as required

	 	Icu_init(&Icu_Config);

		SREG |= (1<<7);

		LCD_init();

	while(1){



		LCD_moveCursor(0, 1);

		LCD_displayString("Distance= ");

		if(Ultrasonic_readDistance()>100)

		{
			LCD_intgerToString(Ultrasonic_readDistance());
		}
		else
		{
			LCD_intgerToString(Ultrasonic_readDistance());

			LCD_displayCharacter(' ');
		}
		LCD_displayString("cm");

		_delay_ms(100);

	}
}
