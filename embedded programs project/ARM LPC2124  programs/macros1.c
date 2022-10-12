#include <lpc21xx.h>
#define EN1 (1<<2)
#define IN1 (1<<3)
#define IN2 (1<<4)
void delay(int);
int main(){
	IO0DIR=0;
	IO0DIR=IN1|EN1|IN2;
	while(1){
		IO0SET=IN1|EN1|IN2;
		delay(500);
		IO0CLR=IN1|EN1|IN2;
		delay(500);
	}
	return 0;}
	void delay(int d)
{
	 int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++);}} 