#include<pic18.h>
void delay();
void main()
{
	TRISC=0X00;
	TRISD=0X01;
	while(1)
	{
		if(RD0==0)
        {
          LATC=0X1D;
          delay();

        }
        else if(RD1==0)
        {
         LATC=0X2E;
         delay();

        }
        else if(RD2==0)
         {
         LATC=0X00;
         delay();
         }
	}
}
void delay()
{
int i,j;
for(i=0;i<=500;i++)
for(j=0;j<=500;j++);
}       