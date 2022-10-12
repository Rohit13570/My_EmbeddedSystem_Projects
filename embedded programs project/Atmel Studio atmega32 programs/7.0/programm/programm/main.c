/*
 * programm.c
 *
 * Created: 24-12-2020 23:57:53
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>
int main(void)
{
   DDRB=0xff;
   DDRC=0x00;
   
    while (1) 
    {
		if((PINC&0x01)==0)
		{
			PORTB=0x0f;
			_delay_ms(1000);
		}
		if((PINC&0x04)==0)
		{
			PORTB=0xf0;
			_delay_ms(1000);
		}
    }
}

