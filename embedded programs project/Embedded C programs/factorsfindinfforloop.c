#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s,h,i;
	scanf("%d%d",&a,&b);
	if (a<b)
	{
		s=a;
}
	else
	{
		s=b;
	}
	for(i=1;i<=s;i++)
	{
		if(a%i==0 && b%i==0)
		{
			h=i;
		}
		
	}printf("%d",h);
}
