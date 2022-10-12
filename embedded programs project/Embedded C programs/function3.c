#include<stdio.h>
void multiplication(int a);
void main()
{
int a;
scanf("%d",&a);
multiplication(a);	
}
void multiplication(int a)
{
		int i,p=1;
	for(i=1;i<=10;i++)
	{
	p=a*i;	
   printf("%d*%d=%d\n",i,a,p); 
	} 
}
