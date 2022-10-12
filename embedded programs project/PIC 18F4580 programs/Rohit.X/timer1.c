/*
 * File:   timer1.c
 * Author: rohit
 *
 * Created on 30 November, 2020, 3:28 AM
 */


#include <xc.h>
void delay1000(int);
void main(void) {
    TRISD=0x00;
    T1CON=0xF9;
    while(1){
        PORTD=0xff;
        delay1000(2000);
        PORTD=0x00;
        delay1000(2000);
    }
    return;
}
void delay1000(int d)
{
    int timeloop;
    for(timeloop=0;timeloop<1/10;timeloop++)
    {
        TMR1L=0x77;
        TMR1H=0xEC;
        while(TMR1IF==0);
        TMR1IF=0;
    }
}
