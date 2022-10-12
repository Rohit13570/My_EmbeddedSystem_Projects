#include<stdio.h>
void sum(int a,int b);
void main()
{
	int a,b;
	printf("enter the value");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int a,int b)
{int c;
c=a+b;
printf("sum=%d",c);
}
