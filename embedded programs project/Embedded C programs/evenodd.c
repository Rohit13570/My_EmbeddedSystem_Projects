#include<stdio.h>
void main()
{   // check whether the entered value is even or odd
	int num_1;
	printf("Enter a number");
	scanf("%d",&num_1);
	if(num_1%2==0)//check divisibility of 2
	{
	printf("Entered number is even");
	}
	else
	{
	printf("Entered number is odd");	
	}
	
}
