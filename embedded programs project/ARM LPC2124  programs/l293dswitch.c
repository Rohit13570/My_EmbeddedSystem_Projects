#include <lpc21xx.h>
void delay(int);
int main()
{   IO0DIR=0x0000ff;
   
    while(1) {
			 if((IO0PIN&(1<<9))==(1<<9)){
				  IO0CLR=1|1<<1|1<<2; 
          IO0CLR=1<<3|1<<4|1<<5;  
        delay(2000);}
			if((IO0PIN&(1<<10))==(1<<10)){
        IO0SET=1;          
        IO0CLR=1<<1;			
        IO0SET=1<<2;
		   	delay(2000);
         IO0SET=1<<5;          
        IO0CLR=1<<4;			
        IO0SET=1<<3;
		   	delay(2000);
			}
			if((IO0PIN&(1<<11))==(1<<11)){
        IO0SET=1<<1;          
        IO0CLR=1;          
        IO0SET=1<<2;
			  delay(2000);
			  IO0SET=1<<4;         
        IO0CLR=1<<5;         
        IO0SET=1<<3;
			  delay(2000);
			}
		 }
		return 0;
	}
void delay(int d)
{
	 int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 