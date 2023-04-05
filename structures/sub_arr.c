#include<stdio.h>
struct student{
		char name[20];
		int rollno;
		int submarks[4];
	       };
int main()
{
	int i,j;
	struct student stuarr[3];
	for(i=0;i<3;i++)
	{
		printf("enter data for student %d\n",i+1);
		printf("enter name and rollno:");
		scanf("%s %d",&stuarr[i].name,&stuarr[i].rollno);
	for(j=0;j<4;j++)
	{
		printf("enter marks of the subject:%d",j+1);
		scanf("%d",stuarr[i].submarks[j]);
	}
	}
	for(i=0;i<3;i++)
	{
		printf("data of student %d\n",i+1);
	for(j=0;j<3;j++)
	printf("%d",stuarr[i].submarks[j]);
	}
	printf("%s %d",stuarr[i].name,&stuarr[i].rollno);
}