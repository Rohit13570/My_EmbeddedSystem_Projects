#include<stdio.h>
int main()
{
	int var=20;
	int *ip;
	ip=&var;
	printf("addrss of var is %x\n",&var);
	printf("address stored in ip = %x\n",ip);
	printf("value of *ip is %d",*ip);
	return 0;
}
