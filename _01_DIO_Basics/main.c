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
		PORTA =0b00000001;
		for(int i=0;i<4;i++)
		{
			_delay_ms(250);
			PORTA=PORTA<<1;
		}
	}
}
