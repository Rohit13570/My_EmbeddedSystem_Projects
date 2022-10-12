#include<stdio.h>
void main()
{
	int i,n,s=0;
	printf("Enter the value\n");
	scanf("%d",&n);
	do
	{   s=s+i;
		i++;
	}while(i<=n);
	printf("%d\n",s);
}
