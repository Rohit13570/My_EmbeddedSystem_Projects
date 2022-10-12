/*
 * File:   newmain.c
 * Author: rohit
 *
 * Created on 22 October, 2020, 4:01 PM
 */


#include <xc.h>
void delay();
void main() {
    TRISC=0X00;
	TRISD=0X01;
	while(1)
	{
		
        if(RD2==0)
         {
         LATC=0X00;
         delay();
         }
        else if(RD1==0)
        {
         LATC=0X2E;
         delay();

        }
        else if(RD0==0)
        {
          LATC=0X1D;
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

