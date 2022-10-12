#include <stdio.h>
#include <string.h>
struct students{
	char name[50];
	int age,rollno,mark;
};
int main() 
{
struct students student1;
struct students student2;
scanf("%s",student1.name);
scanf("%d",&student1.age);
scanf("%d",&student1.rollno);
scanf("%d",&student1.mark);
scanf("%s",student2.name);
scanf("%d",&student2.age);
scanf("%d",&student2.rollno);
scanf("%d",&student2.mark);
printf( " student1 name is %s",student1.name);
printf("Age is %d",student1.age);
printf("Roll NO:%d",student1.rollno);
printf("Mark is %d",student1.mark);
printf("Student 2 name is %s",student2.name);
printf("Age is %d",student2.age);
printf("Roll No:%d",student2.rollno);
printf("Mark is %d",student2.mark);
return 0;
}

