#include<stdio.h>
void main()
{
	int i=1,n,p=1;
	printf("Enter the value\n");
	scanf("%d",&n);
	while(i<=10)
	{
		p=i*n;
		printf("%d*%d=%d\n",i,n,p);
		i++;
	}
	
}
