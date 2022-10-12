#include<stdio.h>
void main()
{
	 char a[10];
    int alphabets=0, digits=0, spaces=0, i;
    gets(a);
   for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            alphabets++;
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            digits++;
        }
        else
        {
           spaces++;
        }
    }
    printf("%d\n",alphabets);
    printf("%d\n",digits);
    printf("%d\n",spaces);
	
}
