/*
 * spi.c
 *
 * Created: 01-12-2020 15:04:14
 * Author : rohit
 */ 
//spi slave
#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>

int main(void)
{
	
   DDRB=0x40;
   DDRC=0xff;
   SPCR=0b01000000;
   SPSR=0x00;
   
    while (1) 
    {
		while((SPSR&0x80)==0);
		PORTC=SPDR;
    }
}

