#include<stdio.h>
void sum(int a,int b);
void subtraction(int a,int b);
//void multiplication(int a,int b);
int main()
{
	int a,b;
	printf("enter the value");
	scanf("%d%d",&a,&b);
	sum(a,b);
	subtraction(a,b);
//	multiplication(a,b);
	return 0;
}
void sum(int a,int b)
    {int c;
     c=a+b;
    printf("sum=%d",c);
}	
void substraction(int a,int b)
	{
	int d;
   d=a-b;
   printf("result of substraction=%d",d);	
	}

//void multiplication(int a,int b)
  //  {
 //	int p;
//	p=a*b;	
 //  printf("%d\n",p); 
//	} 
