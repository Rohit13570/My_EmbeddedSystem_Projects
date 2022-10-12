/*
 * spi master.c
 *
 * Created: 01-12-2020 15:11:40
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>

int main(void)
{
    DDRC=0xff;
	DDRB=0xB0;
	SPCR=0x50;
	SPSR=0;
    while (1) 
    {
		PORTC=0x00;
		SPDR=0xAA;
		while((SPSR&0x80)==0);
		_delay_ms(500);
		
		SPDR=0x55;
		while((SPSR&0x80)==0);
		_delay_ms(500);
    }
}

