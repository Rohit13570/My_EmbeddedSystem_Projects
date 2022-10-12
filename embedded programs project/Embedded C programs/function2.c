#include<stdio.h>
void factorial(int a);
void main()
{
 int a;
 scanf("%d",&a);
 factorial(a);	
}
void factorial(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{
	f=f*i;	
   
	} printf("%d\n",f); 
}
