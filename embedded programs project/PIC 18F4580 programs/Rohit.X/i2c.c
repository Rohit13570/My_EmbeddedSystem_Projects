/*
 * File:   i2c.c
 * Author: rohit
 *
 * Created on 30 November, 2020, 3:08 PM
 */


#include <xc.h>
void delay(int);
void main(void) {
    TRISC3 = 1;
    TRISC4 = 1;
    SSPSTAT=0x80;
    SSPCON1=0x28;
    SSPADD=0x31;
    
    SEN = 1;
    while(SEN ==1);
    SSPIF = 0;
    while(1){
        SSPBUF = 0x70;
        while(SSPIF == 0);
        SSPIF = 0;
        
        SSPBUF = 0xf0;
        while(SSPIF == 0);
        SSPIF = 0;
        delay(500);
        
        SSPBUF = 0x0f;
        while(SSPIF == 0);
        SSPIF = 0;
        delay(500);
        
        RSEN = 1;
        while(RSEN==1);
        SSPIF = 0;
        
        SSPBUF = 0x7E;
        while(SSPIF == 0);
        SSPIF = 0;
        
        SSPBUF = 0x00;
        while(SSPIF == 0);
        SSPIF = 0;
        delay(500);
        
        SSPBUF = 0xff;
        while(SSPIF == 0);
        SSPIF = 0;
        delay(500);
        
        RSEN = 1;
        while(RSEN==1);
        SSPIF = 0;
    }

    return;
}
void delay(int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 
