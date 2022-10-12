#include<stdio.h>
void main()
{
	int i,j,a[5],l=0;
	for(i=0;i<5;i++)
	{
	 scanf("%d",&a[i]);	
	}

	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
	if(a[i]<a[j])
		{
		l=a[i];
		a[i]=a[j];
		a[j]=l;
    }}
	  for(i=0;i<5;i++)
	  {printf("%d\t",a[i]);	
	  }
	 		 	
}
