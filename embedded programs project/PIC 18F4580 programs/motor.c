#include<pic18.h>
void delay();
void main()
{
	TRISC=0X00;
	while(1)
	{
		LATC=0X2D;
		delay();
		
	}
	}
void delay()
{
int i,j;
for(i=0;i<=500;i++)
for(j=0;j<=500;j++);
}
		