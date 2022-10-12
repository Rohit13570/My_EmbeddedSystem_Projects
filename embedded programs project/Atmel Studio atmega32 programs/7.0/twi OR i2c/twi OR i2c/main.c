/*
 * twi OR i2c.c
 *
 * Created: 18-12-2020 02:48:53
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>

int main(void)
{
    TWBR=72;
	TWCR=0xA4;
	while(TWSR!=0x08);
	TWDR=0x70;
	TWCR=0x84;
	while(TWSR!=0x18);
    while (1) 
    {
			TWDR=0xAA;
			TWCR=0x84;
			while(TWSR!=0x28);
			_delay_ms(500);
				TWDR=0x55;
				TWCR=0x84;
				while(TWSR!=0x28);
				_delay_ms(500);
    }
}

