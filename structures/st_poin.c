#include<stdio.h>
struct student{
		char name[20];
		int rollno;
		int marks;
	       };
int main()
{
	struct student stu={"mary",1,88};
	struct student *ptr=&stu;
	printf("name - %s\t",ptr->name);
	printf("rollno- %d\t",ptr->rollno);
	printf("marks-%d\n",ptr->marks);
}