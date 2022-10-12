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
void lcdInit();
void portInit();
void ledPattern();
void main (void)
{  
    portInit();
    lcdInit();
    ledPattern();
    while(1);
  
    return;
}
void portInit()
{
    TRISD=0x00;
    TRISC=0x00;
    TRISA=0x01;
    TRISB=0X00;
    ADCON1=0x0F; 
}
void ledPattern()
{
   while(1)
{
if(RA0==0)
{
cmd(0x01);
lcdDisplay("led blinking");
delay(250);
LATB=0X00;
delay(200);
LATB=0XFF;
delay(200);
}
else if(RA1==0)
{
 cmd(0x01);
lcdDisplay("led 4by4 blink");
LATB=0XF0;
delay(200);
LATB=0X0F;
delay(200);
}
else if(RA2==0)
{
cmd(0x01);
lcdDisplay("alternate blink");
LATB=0X55;
delay(200);
LATB=0XAA;
delay(200);
}
else if(RA3==0)
{
cmd(0x01);
lcdDisplay("led flowing");
int i;
LATB=0X01;
delay(200);
for(i=0;i<8;i++)
{
LATB=LATB<<1;
delay(200);
}
}
   }}
void lcdInit()
{
    cmd(0x38);
    cmd(0x01);
    //cmd(0xC7);
    cmd(0x06);
    cmd(0x0E);
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


