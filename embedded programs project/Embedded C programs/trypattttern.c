#include<stdio.h>
void main()
{
	int i,j,a;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=i;j<=a;j++)
		{
			printf("*");
		}

		printf("\n");
	}
}
