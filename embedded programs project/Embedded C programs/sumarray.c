#include<stdio.h>
void main()
{
	int i,a[5],s=0;
	for(i=0;i<5;i++)
	{
	 scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		s=s+a[i];
		
	}
		 printf("%d\n",s);	
}
