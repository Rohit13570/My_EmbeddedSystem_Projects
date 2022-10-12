#include<stdio.h>
void main()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
	 scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{	 printf("%d\n",a[i]);
		}	
	}
}
