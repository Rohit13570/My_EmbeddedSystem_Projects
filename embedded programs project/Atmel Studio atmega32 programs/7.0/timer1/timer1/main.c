/*
 * timer1.c
 *
 * Created: 24-12-2020 23:42:03
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>

void timer1();
int main(void)
{
    DDRD=0xff;
	TCCR1A=0x00;
	TCCR1B=0x05;
    while (1) 
    {
		PORTD=0xff;
		timer1();
		PORTD=0x00;
		timer1();
    }
}
void timer1(){
	TCNT1H=0xff;
	TCNT1L=0xff;
	while((TIFR&0x04)==0);
	TIFR=0x04;
}

