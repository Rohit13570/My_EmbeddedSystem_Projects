/*
 * lcd4bit.c
 *
 * Created: 19-12-2020 15:01:56
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>
void lcdDisplay(const char*);
void lcd_cmd(int);
void lcd_data(int);
int main(void)
{  DDRD=0xff;
	DDRC=0xff;
		lcd_cmd(0x02);
		lcd_cmd(0x28);
		lcd_cmd(0x06);
		lcd_cmd(0x0E);
		lcd_cmd(0x01);
		lcd_cmd(0x80);
	lcd_data('a');
	lcd_cmd(0xc7);
	lcdDisplay("hello");
	/* Replace with your application code */
	while (1)
	{
	}
}
void lcd_cmd(int cmd){
	int temp=cmd&0xF0;
	PORTD=temp;
	PORTC=0x02;
	_delay_ms(250);
	PORTC=0x00;
	temp=cmd&0x0F;
	PORTD=temp<<4;
	PORTC=0x02;
	_delay_ms(250);
	PORTC=0x00;
}

void lcd_data(int data){
	int temp=data&0xF0;
	PORTD=temp;
	PORTC=0x03;
	_delay_ms(250);
	PORTC=0x01;
	 temp=data&0x0F;
	 PORTD=temp<<4;
	 PORTC=0x03;
	 _delay_ms(250);
	 PORTC=0x01;
}
void lcdDisplay(const char *str){
	while(*str!='\0'){
		lcd_data(*str);
		str++;
	}}

