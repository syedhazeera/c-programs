#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int rollno;
	float marks;
	};

int main()
{
struct student stuarr[5];
int i;
for(i=0;i<5;i++)
{
	printf("enter the name,rollno and marks:\n");
	scanf("%s %d f%",&stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
}
for(i=0;i<5;i++)
printf("%s\t%d\t%f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
}