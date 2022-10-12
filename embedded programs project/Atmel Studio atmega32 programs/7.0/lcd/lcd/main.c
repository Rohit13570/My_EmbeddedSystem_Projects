/*
 * lcd.c
 *
 * Created: 21-11-2020 15:05:16
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
	lcd_cmd(0x38);
	lcd_cmd(0x01);
	lcd_cmd(0xC0);
	lcd_cmd(0x06);
	lcd_cmd(0x0E);
	lcd_data('a');
	lcd_cmd(0xc7);
	lcdDisplay("hello");
    /* Replace with your application code */
    while (1) 
    {
    }
}
void lcd_cmd(int cmd){
	PORTD=cmd;
	PORTC=0x02;
	_delay_ms(250);
	PORTC=0x00;
}

void lcd_data(int data){
	PORTD=data;
	PORTC=0x03;
	_delay_ms(250);
	PORTC=0x01;
}
void lcdDisplay(const char *str){
	while(*str!='\0'){
		lcd_data(*str);
		str++;
	}}