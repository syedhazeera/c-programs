#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float percentage;
};
void func(struct student record);
int main()
{
	struct student record = {1,"mary",68.8};
	func(record);
return 0;
}
void func(struct student record)
{
	printf("id is %d\n",record.id);
	printf("name is %s\n ",record.name);
	printf("percentage is %f",record.percentage);
}