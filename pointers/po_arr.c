#include<stdio.h>
int main()
{
	int a[]={12,45,6,7,8},i;
	int *p = a;
	printf("elements of array: ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*p);
		p++;
	}
	return 0;
}
	
	