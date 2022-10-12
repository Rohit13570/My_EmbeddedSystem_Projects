#include<stdio.h>
int sum(int a,int b);
void main()
{
	int a,b,c;
	printf("Enter the number");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum=%d",c);
}
int sum(int a,int b)
{
	int s;
	s=a+b;
	return(s);
}
