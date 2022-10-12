/*
 * File:   externalinterrupt.c
 * Author: rohit
 *
 * Created on 30 November, 2020, 3:42 AM
 */


#include <xc.h>
#include<string.h>
void tx_char(char ch);
void delay(int);
void main(void) {
    char ch;
    INT0IE=1;
    
    TXSTA = 0x24;
    RCSTA = 0x90;
    SPBRG = 129;
    
    while(1){
        ch='0';
        while(ch <= '9'){
            tx_char(ch);
            delay(500);
            ch++;
        }
    }
    return;
}
void __interrupt() isr_ext(void){
    if(INT0F==1){
        tx_char('X');
        delay(500);
    }
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