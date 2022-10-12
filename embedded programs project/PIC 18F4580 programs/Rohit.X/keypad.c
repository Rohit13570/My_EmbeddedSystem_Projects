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
void lcdDisplay(const char *);

void main (void)
{   int key;
    TRISB=0XF0;
    TRISD=0x00;
    TRISC=0x00;
    ADCON1=0x0F;
    cmd(0x38);
    cmd(0x01);
    //cmd(0xC7);
    cmd(0x06);
    cmd(0x0E);
    cmd(0x80);
    lcdDisplay("Password");
   cmd(0xC1);  
    while(1)
    {
        LATB=0x0E;
        key=PORTB&(0xF0);
        switch(key)
        {
            case 0xE0 : data('1');break;
            case 0xD0 : data('2');break;
            case 0xB0 : data('3');break;
            case 0x70 : data('4');break;
        }
        LATB=0x0D;
        key=PORTB&(0xF0);
        switch(key)
        {
            case 0xE0 : data('5');break;
            case 0xD0 : data('6');break;
            case 0xB0 : data('7');break;
            case 0x70 : data('8');break;
        }
        LATB=0x0B;
        key=PORTB&(0xF0);
        switch(key)
        {
            case 0xE0 : data('9');break;
            case 0xD0 : data('A');break;
            case 0xB0 : data('B');break;
            case 0x70 : data('C');break;
        }
        LATB=0x07;
        key=PORTB&(0xF0);
        switch(key)
        {
            case 0xE0 : data('D');break;
            case 0xD0 : data('E');break;
            case 0xB0 : data('F');break;
            case 0x70 : data('G');break;
        }
        delay(250);
    }
    return;
}
void lcdDisplay(const char *ch){
    while(*ch!='\0'){
        data(*ch);
        ch++;
    }}
  

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

