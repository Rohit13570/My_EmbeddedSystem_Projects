#include<pic18.h>
void delay();
void main()
{
TRISC=0x01;
TRISD=0x00;
while(1)
{
if(RC0==0)
{
LATD=0x00;
delay();
LATD=0XFF;
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