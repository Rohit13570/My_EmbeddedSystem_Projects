/*
 * i2clcd.c
 *
 * Created: 04-01-2021 15:35:47
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>

void twi_init();
void twi_data(int);
void twi_slaveAddr(int);
void twi_repeat();
int main(void)
{
	twi_init();
	twi_slaveAddr( 0x70 );
	while (1) 
    {
		twi_data( 0xAA );
		_delay_ms(500);
		twi_data( 0x55 );
		_delay_ms(500);
		
		twi_repeat();
		twi_slaveAddr( 0x7E );
		
		twi_data( 0xAF );
		_delay_ms(500);
		twi_data( 0xF5 );
		_delay_ms(500);
		
		twi_repeat();
    }
}

void twi_init(){
	TWBR = 72;
	TWSR = 0;
	
	TWCR = 0xA4;
	while( TWSR != 0x08);
}

void twi_data( int data ){
	TWDR = data;
	TWCR = 0x84;
	while( TWSR != 0x28 );
}

void twi_slaveAddr( int sla ){
	TWDR = sla;
	TWCR = 0x84;
	while( TWSR != 0X18 );
}

void twi_repeat(){
	TWCR = 0xA4;
	while( TWSR != 0x10);
}


void lcd_cmd( int cmd){
	twi_data(cmd);
	PORTC = 0x00 ;
	_delay_ms(500);
	PORTC = 0x00;
}