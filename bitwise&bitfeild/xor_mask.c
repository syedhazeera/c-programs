#include<stdio.h>
int main()
{
	int a,bit,mask = 2;
	printf("enter the integer:\n");
	scanf("%d",&a);
	printf("a = %d\t",a);
	a= a^mask;
	printf("a = %d\t",a);
	a = a^mask;
	printf("a = %d\t",a);
}
	