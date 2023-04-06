#include<stdio.h>
int main()
{
	int a,bit,mask=0x20;
	printf("enter an integer:\n");
	scanf("%d",&a);
	printf("a=%d\t",a);
	a=a|mask;
	printf("after switching on 5th bit,the value of a is:\n");
	printf("a = %d\t",a);
} 