/*
 * File:   spi.c
 * Author: rohit
 *
 * Created on 17 December, 2020, 10:55 PM
 */


#include <xc.h>
void delay(int);
void main(void) {
    TRISC=0x10;
    TRISD=0x00;
    SSPSTAT=0x80;
    SSPCON1=0x20;
    RD0=0;
    RD1=1;
    SSPBUF=0x00;
    while(SSPIF==0);
    SSPIF=0;
    delay(500);
    
   SSPBUF=0x55;
    while(SSPIF==0);
    SSPIF=0;
    delay(500);
    
    SSPBUF=0xAA;
    while(SSPIF==0);
    SSPIF=0;
    delay(500);
    while(1);
    return;
}
void delay(int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 

