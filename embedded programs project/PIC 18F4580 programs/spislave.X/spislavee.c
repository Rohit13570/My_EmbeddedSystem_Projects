/*
 * File:   spislavee.c
 * Author: rohit
 *
 * Created on 17 December, 2020, 11:08 PM
 */


#include <xc.h>

void delay(int);
void main(void) {
    TRISC=0x18;
    TRISD=0x00;
    SSPSTAT=0x80;
    SSPCON1=0x24;
    while(1){
        while(SSPIF==0);
        SSPIF=0;
        PORTD=SSPBUF;
        delay(500);
    }
}
void delay(int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 