#include<stdio.h>
void main()
{
	int i,n,p=1;
	printf("Enter the value\n");
	scanf("%d",&n);
	do
	{   p=n*i;
    	printf("%d*%d=%d\n",i,n,p);
		i++;
	}while(i<=10);
	
}
