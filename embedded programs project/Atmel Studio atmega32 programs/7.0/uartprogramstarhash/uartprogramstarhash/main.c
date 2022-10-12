#include <avr/io.h>
#include <string.h>
#define F_CPU 16e6
#include <util/delay.h>
void tx_char(char);
char rx_char();
void tx_str(const char *);
void uart_Init();
int main(void){
	char letter,userpass[10],password[]="pass123";
	int index=0;
   uart_Init();
	tx_char('A');
	tx_str("Hello 2020");
	tx_char('\r');
	while(1){
		letter = rx_char();
		if(letter=='*')
		{
			
			index=0;
			do{
				userpass[index] = rx_char();
				if(userpass[index]=='#')
				break;
				index++;
			}while(userpass[index-1]!='#');
			userpass[index]='\0';
			if(strcmp(userpass,password)==0)
			{
				tx_str("USER ACCESS GRANTED!!!\r");
				tx_str(userpass);
			}
			else{
				tx_str("\rUSER ACCESS DENIED!!!") ;
			}
			
		}}  return 0;
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
