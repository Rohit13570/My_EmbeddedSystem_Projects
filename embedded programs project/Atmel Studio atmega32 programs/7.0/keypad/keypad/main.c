/*
 * keypad.c
 *
 * Created: 17-12-2020 23:37:57
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>


void cmd(int);
void data(char);
void lcdDisplay(const char *);
char keypad();
void lcdInit();
int main(void)
{   char ch;
	DDRB=0x0f;
	DDRD=0xff;
	DDRC=0xff;
	lcdInit();
	lcdDisplay("Password");
	cmd(0xC1);
	
	while(1)
	
	{
		ch = keypad();
		data(ch);
		
	}
	
	return(0);
}
void lcdInit()
{   
	cmd(0x38);
	cmd(0x01);
	//cmd(0xC7);
	cmd(0x06);
	cmd(0x0E);
	cmd(0x80);
}
char keypad()
{
	int key;
	while(1){
		PORTB=0x0E;
		key=PINB&(0xF0);
		switch(key)
		{
			case 0xE0 : return('1');
			case 0xD0 : return('2');
			case 0xB0 : return('3');
			case 0x70 : return('4');
		}
		PORTB=0x0D;
		key=PINB&(0xF0);
		switch(key)
		{
			case 0xE0 : return('5');
			case 0xD0 : return('6');
			case 0xB0 : return('7');
			case 0x70 : return('8');
		}
		PORTB=0x0B;
		key=PINB&(0xF0);
		switch(key)
		{
			case 0xE0 : return('9');
			case 0xD0 : return('A');
			case 0xB0 : return('B');
			case 0x70 : return('C');
		}
		PORTB=0x07;
		key=PINB&(0xF0);
		switch(key)
		{
			case 0xE0 : return('D');
			case 0xD0 : return('E');
			case 0xB0 : return('F');
			case 0x70 : return('G');
		}_delay_ms(250);
	}
}

void cmd(int cmd){
	PORTD=cmd;
	PORTC=0x02;
	_delay_ms(250);
	PORTC=0x00;
}

void data(char ch){
	PORTD=ch;
	PORTC=0x03;
	_delay_ms(250);
	PORTC=0x01;
}
void lcdDisplay(const char *str){
	while(*str!='\0'){
		data(*str);
		str++;
	}}
