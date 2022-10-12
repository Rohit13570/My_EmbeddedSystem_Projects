/*
 * UART.c
 *
 * Created: 19-12-2020 15:34:53
 * Author : rohit
 */ 

#include <avr/io.h>
#define F_CPU 16e6
#include <util/delay.h>	
void tx_char(char);
char rx_char();
void tx_str(const char *);
void uart_Init();
int main(void)
{
    
  uart_Init();
  tx_char('A');
  tx_str("Welcome");
}

void uart_Init(){
	UCSRA =0x00;
	UCSRB=0x18;
	UCSRC=0x06;
	UBRRH=0x00;
	UBRRL=0x67;
}
char rx_char(){
	while((UCSRA&0x80)==0);
	return(UDR);
}
void tx_char(char ch){
	UDR = ch ;
	while((UCSRA&0x40)==0);
	_delay_ms(10);
}
void tx_str(const char *str){
	while(*str!='\0'){
		tx_char(*str);
		str++;
	}
}