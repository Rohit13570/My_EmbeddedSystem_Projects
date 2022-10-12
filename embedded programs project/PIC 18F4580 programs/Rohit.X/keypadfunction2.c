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
char keypad();
void lcdInit();
void main (void)
{   char ch;
    TRISB=0XF0;
    TRISD=0x00;
    TRISC=0x00;
    ADCON1=0x0F;
    lcdInit();
    lcdDisplay("Password");
    cmd(0xC1); 
   
     while(1)
       
        {
            ch = keypad();
            data(ch);
            
        } 
 
    return;
}
void lcdInit()
{
        cmd(0x38);
    cmd(0x01);
    //cmd(0xC7);
    cmd(0x06);
    cmd(0x0E);
    cmd(0x80);
}
char keypad()
{
    int key;
    while(1){
        LATB=0x0E;
        key=PORTB&(0xF0);
        switch(key)
        {
            case 0xE0 : return('1');
            case 0xD0 : return('2');
            case 0xB0 : return('3');
            case 0x70 : return('4');
        }
        LATB=0x0D;
        key=PORTB&(0xF0);
        switch(key)
        {
            case 0xE0 : return('5');
            case 0xD0 : return('6');
            case 0xB0 : return('7');
            case 0x70 : return('8');
        }
        LATB=0x0B;
        key=PORTB&(0xF0);
        switch(key)
        {
            case 0xE0 : return('9');
            case 0xD0 : return('A');
            case 0xB0 : return('B');
            case 0x70 : return('C');
        }
        LATB=0x07;
        key=PORTB&(0xF0);
        switch(key)
        {
            case 0xE0 : return('D');
            case 0xD0 : return('E');
            case 0xB0 : return('F');
            case 0x70 : return('G');
        }delay(250);
    }   
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

