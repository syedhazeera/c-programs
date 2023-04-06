#include<stdio.h>
int main()
{
	int a,bit,mask = 2;
	printf("enter the integer:\n");
	scanf("%d",&a);
	printf("a = %d\t",a);
	a= a&~mask;
	printf("after switching off the 5th bit,the value of a is :\n ");
	printf("a=%d\t",a);
}