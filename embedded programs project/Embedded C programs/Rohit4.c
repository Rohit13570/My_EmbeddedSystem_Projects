// menu for calculations.
#include<stdio.h>
void main()
{
	int num_1,num_2,choice,result;
	printf("enter the numbers");
	scanf("%d%d",&num_1,&num_2);
	printf("enter the choice");
	printf("/nEnter 1 for add,2 for sub,3 for multiplication;4 for div");
	scanf("%d",&choice);
	if(choice>4||choice<1)
	{
		printf("wrong choice");
		
	}
	else if(choice==1)
	{
		result=num_1+num_2;
		printf("the sum is %d",result);
	}
		else if(choice==2)
	{
		result=num_1-num_2;
		printf("the sum is %d",result);
	}
		else if(choice==3)
	{
		result=num_1*num_2;
		printf("the sum is %d",result);
	}
	
		else 
	{
		result=num_1/num_2;
		printf("the sum is %d",result);
	}
	
}
