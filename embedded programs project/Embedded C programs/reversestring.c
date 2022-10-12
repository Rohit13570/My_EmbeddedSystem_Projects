#include<stdio.h>
void main()
{char a[10],l=0,i;
 gets(a);
 for(i=0;a[i]!=0;i++)
 {l++;
 }
 for(i=l;i>=0;i--)
 {printf("%c",a[i]);
 }
}

