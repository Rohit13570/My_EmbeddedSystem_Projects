/* 
 * File:   lcd.c
 * Author: rohit
 *
 * Created on 24 October, 2020, 2:26 PM
 */

#include <xc.h>

void cmd(int);
void data(char);
void delay(int);

void main (void)
{
    TRISD=0x00;
    TRISC=0x00;
    cmd(0x38);
    cmd(0x01);
    cmd(0xC7);
    cmd(0x06);
    cmd(0x0E);
   data('a');
            
    while(1);
    return;
}
void cmd(int c){
     LATD = c;
     RC0 = 0;
     RC1 = 1;                                                                                              
     delay(250);
     RC1 = 0;
}
void data(char ch){
     LATD=ch;
     RC0=1;
     RC1=1;
     delay(250);
     RC1=0;
}
void delay(int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 