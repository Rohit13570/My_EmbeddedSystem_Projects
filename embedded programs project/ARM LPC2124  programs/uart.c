#include <lpc21xx.h>
void uart_init(void);
void uart_txChar(char);
char uart_rx(void);
int main(){
	char ch;
	uart_init();
	uart_txChar('A');
	while(1){
		ch=uart_rx();
		uart_txChar(ch);
	}
}
void uart_init(void){
	PINSEL0=0x05;
	U0LCR=0x83;
	U0DLL=0x63;
	U0DLM=0x00;
	U0LCR=0x03;
}
void uart_txChar(char ch)
{
	U0THR=ch;
	while((U0LSR&(1<<5))==0);
}
char uart_rx(){
	while((U0LSR&(1<<0))==0);
  return(U0RBR);
}