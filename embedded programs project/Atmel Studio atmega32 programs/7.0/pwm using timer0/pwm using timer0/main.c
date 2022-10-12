/*
 * pwm using timer0.c
 *
 * Created: 24-12-2020 23:34:06
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>

int main(void)
{
    int dutyCycle;
	DDRB=0xff;
	
	TCCR0=0x69;
	TCNT0=0;
	
    while (1) 
    {
		for(dutyCycle=0;dutyCycle<=255;dutyCycle++){
			OCR0=dutyCycle;
			_delay_ms(20);
    }
}
}
