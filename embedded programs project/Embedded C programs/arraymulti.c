#include<stdio.h>
void main()
{
	int i,a[5],p=1;
	for(i=0;i<5;i++)
	{
	 scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		p=p*a[i];
		
	}
		 printf("%d\n",p);
	}
