#include<pic18.h>
void delay();
void main()
{
TRISC=0X01;
TRISD=0X00;
while(1)
{
if(RC0==0)
{
LATD=0X00;
delay();
LATD=0XFF;
delay();
}
else if(RC1==0)
{
LATD=0X0F;
delay();
LATD=0XFO;
delay();
}
else if(RC2==0)
{
LATD=0X55;
delay();
LATD=0XAA;
delay();
}
else if(RC3==0)
{
int i;
LATD=0X01;
delay();
for(i=0;i<8;i++)
{
LATD=LATD<<1;
delay();
}
}
else if(RC4==0)
{
int i;
LATD=0X01;
delay();
for(i=8;i>0;i--)
{
LATD=LATD<<1;
delay();
}
}
}
void delay()
{
int i,j;
for(i=0;i<500;i++)
for(j=0;j<500;j++);
}