#include <lpc21xx.h>
#include <string.h>
void uart_init(void);
void uart_txChar(char);
char uart_rx(void);
void tx_str(const char*);
int main(){
    char letter,userpass[10],password[]="pass123";
    int index=0;
    uart_init();
    uart_txChar('A');
        tx_str("Hello 2020");
        uart_txChar('\r');
    while(1){
letter = uart_rx();
    if(letter=='*')
    {
    
     index=0; 
     do{
    userpass[index] = uart_rx();
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
void tx_str(const char*str){
	while(*str!='\0'){
		uart_txChar(*str);
		str++;
}
}