/*
 * main.c
 *
 *  Created on: Jan 18, 2024
 *      Author: Elbaghdadi
 */
#include <avr/io.h>
#include <util/delay.h>

//bit_math//

#define SET_BIT(REG,BIT_NUM)        (REG|(1<<BIT_NUM))
#define CLR_BIT(REG,BIT_NUM)		(REG&( ~ (1<<BIT_NUM) ))
#define GET_BIT(REG,BIT_NUM)		((REG>>BIT_NUM)&1)
#define TOGGLE_BIT(REG,BIT_NUM)		(REG^(1<<BIT_NUM))

int main(void)
{
	DDRA =0b00001111; // make pin A0 as output
	PORTA =0b00000001; // pin A0 -> high (5v)
	while(1) //super loop
	{
		_delay_ms(250);
		PORTA=CLR_BIT(PORTA,0);
		PORTA=SET_BIT(PORTA,1);
		_delay_ms(250);

		PORTA=CLR_BIT(PORTA,1);
		PORTA=SET_BIT(PORTA,2);
		_delay_ms(250);

		PORTA=CLR_BIT(PORTA,2);
		PORTA=SET_BIT(PORTA,3);
		_delay_ms(250);

		PORTA=CLR_BIT(PORTA,3);
		PORTA=SET_BIT(PORTA,2);
		_delay_ms(250);

		PORTA=CLR_BIT(PORTA,2);
		PORTA=SET_BIT(PORTA,1);
		_delay_ms(250);

		PORTA=CLR_BIT(PORTA,1);
		PORTA=SET_BIT(PORTA,0);

	}
}
