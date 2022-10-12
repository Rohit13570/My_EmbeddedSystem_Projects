/*
 * File:   pwm.c
 * Author: rohit
 *
 * Created on 5 November, 2020, 1:37 PM
 */


#include <xc.h>
void delay(int);
void main(void) {
    int lp;
    TRISC=0X00;
    CCP1CON=0X3C;
    TMR2=0X00;
    TMR2ON=1;
    while(1)
    {
        for (lp=0;lp<0x7f;lp++){
            CCPR1L=lp;
            delay(250);
        }
    }
    return;
}
void delay(int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 
