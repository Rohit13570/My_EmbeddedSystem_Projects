#include<pic18.h>
void delay();
void main()
{
TRISD=0x00;
while(1)
{
LATD=0xAA;
delay();
LATD=0X55;
delay();
}
}
void delay()
{
int i,j;
for(i=0;i<500;i++)
for(j=0;j<500;j++);
}