#include<stdio.h>

void main()
{
	int num_1,num_2;
	
	printf("Enter two numbers");
	scanf("%d%d",&num_1,&num_2);
	if(num_1<num_2)
	{
	printf("smaller is %d",num_1);
	}
	else
	{
		printf("smaller is %d",num_2);
	}

}
