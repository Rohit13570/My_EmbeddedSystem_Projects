#include<lpc21xx.h>
int main(){
	IO0DIR = ~(1 << 2);
	while(1)
	{
		if((IO0PIN&(1<<2))==(1<<2)){
			IO0SET=(1<<16);
		}
		else{
				IO0CLR=(1<<16);
		}
	}
	return 0;
}