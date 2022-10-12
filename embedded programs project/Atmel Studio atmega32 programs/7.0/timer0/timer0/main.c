/*
 * timer0.c
 *
 * Created: 24-12-2020 23:50:41
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>
void timer0();
int main(void)
{
    DDRD=0xff;
	TCCR0=0x05;
    while (1) 
    {
		PORTD=0xff;
		timer0();
		PORTD=0x00;
		timer0();
    }
}
void timer0()
{
	
	TCNT0=0;
	while((TIFR&0x01)==0);
	TIFR=0x01;
}
