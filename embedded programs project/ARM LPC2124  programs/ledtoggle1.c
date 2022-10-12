#include<lpc21xx.h>
void delay(int);
int main(void)
  {
     IODIR0=0x0000ffff;          
      while(1)
          {
						if((IO0PIN&(1<<2))==(1<<2)){
             IO0SET=0x0000ffff;         
             delay(500);                                
             IO0CLR=0x0000ffff;        
             delay(500);
          }}
      return 0;
   }

void delay(int d)
{
	 int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 