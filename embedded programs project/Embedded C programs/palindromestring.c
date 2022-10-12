#include<stdio.h>
void main()
{char a[10],b[10];
int i,j,l=0,c=0;
 gets(a);
 for(i=0;a[i]!=0;i++)
 {l++;
 }
 for(i=l-1,j=0;i>=0;i--,j++)
 {
 	b[j]=a[i];
 }
 b[j]='\0';
 for(i=0,j=0;a[i]!='\0';i++,j++)
 {
 	if(a[i]==b[j])
 	{
 		c++;
	 }}
	 if(c==l)
	 {
	 	printf("palindrome");
	 	
	 }
	 else{
	 	printf("non palindrome");
	 }
 }
