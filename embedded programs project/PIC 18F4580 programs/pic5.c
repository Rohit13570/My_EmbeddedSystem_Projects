#include<pic18.h>
void delay();
void main()
{
TRISD=0x00;
while(1)
{
int i;
LATD=0x01;
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