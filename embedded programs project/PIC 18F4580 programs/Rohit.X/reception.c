/*
 * File:   transmiting.c
 * Author: rohit
 *
 * Created on 28 October, 2020, 1:02 PM
 */


#include <xc.h>
#include <string.h>
void tx_char(char ch);
void tx_str(const char *str);
void delay(int);
char rx_char();
void main(void) {
    char letter;
    TRISC=0x80;
    TXSTA=0X24;
    RCSTA=0X90;
    SPBRG=129;
    tx_char('A');
        tx_str("Hello 2020");
        tx_char('\r');
    while(1){
        letter = rx_char();
        tx_char(letter);
        delay(250);
    }
    return;
}
void tx_str(const char *str)
{
    while(*str!='\0')
    {
        tx_char(*str);
        str++;
    }
}
char rx_char(){
     while(RCIF==0);
     return(RCREG);
}
void tx_char(char ch)
{
    TXREG=ch;
    while(TXIF==0);
    TXIF=0;
}
void delay(int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 

