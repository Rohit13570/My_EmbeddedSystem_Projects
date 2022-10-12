#include<stdio.h>
void main()
{
    char a[10],b[10];
	int i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
		b[i]='\0';
		
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	
	
}
