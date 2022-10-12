#include<stdio.h>
void print(int *);
void main()
{
	int i,*p=&i;
	i=100;
	print(p++);
	printf("\n%x",p);
}
void print(int *t)
{
	printf("%d",*t);
	
}
