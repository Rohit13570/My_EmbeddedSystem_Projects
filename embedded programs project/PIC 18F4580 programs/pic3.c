#include<pic18.h>
void delay();
void main()
{
TRISD=0x00;
while(1)
{
LATD=0x80;
delay();
LATD=0X40;
delay();
LATD=0x20;
delay();
LATD=0X10;
delay();
LATD=0x08;
delay();
LATD=0X04;
delay();
LATD=0x02;
delay();
LATD=0X01;
delay();
}
}
void delay()
{
int i,j;
for(i=0;i<500;i++)
for(j=0;j<500;j++);
}