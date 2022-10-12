/*
 * File:   adc.c
 * Author: rohit
 *
 * Created on 30 November, 2020, 2:38 AM
 */


#include <xc.h>
#include <string.h>
void tx_char(char ch);
void delay(int);
void main(void) {
    int temp,res,ch;
    TRISC=0x80;
    TRISA=0xff;
    TXSTA = 0x24;
    RCSTA=0x90;
    SPBRG=129;
    ADCON0=0x01;
    ADCON1=0x00;
    ADCON2=0x00;
    tx_char("A");
    while(1){
        GO=1;
        while(GO==1);
        res=ADRESH;
        delay(100);
        temp=res/100;
        ch=temp+48;
        tx_char(ch);
        
        temp=(res%100)/10;
        ch=temp+48;
        tx_char(ch);
        
        temp=res%10;
        ch=temp+48;
        tx_char(ch);
    }
    return;
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