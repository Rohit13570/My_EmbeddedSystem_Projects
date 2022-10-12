#include<stdio.h>
void main()
{    //to familiar with unsigned int ,typecasting
	unsigned int num_1=50,sum;
	float num_2=80.0;
	int num_3=40;
	sum=num_1+num_2+num_3;
	printf("%d",sum);
	printf("\n%.2f",(float)sum);//typecasting
}
