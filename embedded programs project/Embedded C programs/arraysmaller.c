#include<stdio.h>
void main()
{
	int i,a[5],l=0;
	for(i=0;i<5;i++)
	{
	 scanf("%d",&a[i]);	
	}
	l=a[0];
	for(i=0;i<5;i++)
	{
	if(l>a[i])
		{l=a[i];

		}
	}
		printf("smaller=%d",l);		 	
}
