/*
 * main.c

 *
 *  Created on: Jan 24, 2024
 *      Author: Elbaghdadi
 */

#include<avr/io.h>
#include <util/delay.h>

int main(void)
{


	DDRD  =0b11111111;

while(1)
{
	PORTD =0b00110000;
	_delay_ms(100);


	PORTD =0b01011011;
	_delay_ms(100);


	PORTD =0b01001111;
	_delay_ms(100);


	PORTD =0b01100110;
	_delay_ms(100);


	PORTD =0b01101101;
	_delay_ms(100);

	PORTD =0b01111101;
	_delay_ms(100);

	PORTD =0b00000111;
	_delay_ms(100);

	PORTD =0b11111111;
	_delay_ms(100);

	PORTD =0b01101111;
	_delay_ms(100);
}


	while(1)
	{

	}
}

