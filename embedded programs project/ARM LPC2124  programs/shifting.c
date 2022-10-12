#include<lpc21xx.h>

void delay(int);
int main(){
	IO0DIR=1<<11;
	IO0DIR=1<<10;
	IO0DIR=1<<3;
	while(1){
		IO0SET=1<<10;
		IO0SET=1<<3;
		delay(500);
		IO0SET=1<<11;
		IO0CLR=1<<10;
		delay(500);
		IO0CLR=1<<11;
	}
	return 0;
}
void delay(int d)
{
	 int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 