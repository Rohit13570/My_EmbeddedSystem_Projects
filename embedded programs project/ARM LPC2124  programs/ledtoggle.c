#include<lpc21xx.h>
void delay(int);
int main(){
	IO0DIR = ~(1<<2);
	while(1){
		if((IO0PIN&(1<<2))==(1<<2)){
			IO0SET=(1<<16);
		  delay(1000);
	   	IO0CLR=(1<<16);
      delay(1000);	
	}}
	return 0;
}
void delay(int d)
{
	 int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 