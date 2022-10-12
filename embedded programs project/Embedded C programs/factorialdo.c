#include<stdio.h>
void main()
{
	int i=1,n,f=1;
	printf("Enter the value\n");
	scanf("%d",&n);
	do
	{   f=f*i;
		i++;
	}while(i<=n);
	printf("%d\n",f);
}
