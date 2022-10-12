/*
 * File:   timer0.c
 * Author: rohit
 *
 * Created on 30 November, 2020, 3:17 AM
 */


#include <xc.h>

void main(void) {
    TRISD=0x00;
    T0CON=0xc7;
    while(1){
        PORTD=0xff;
        TMR0=0x00;
       while(TMR0IF==0);
        TMR0IF=0;
        
        PORTD=0x00;
        TMR0=0X00;
        while(TMR0IF==0);
        TMR0IF=0;
    }
    return;
}
