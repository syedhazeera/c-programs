#include<stdio.h>
int* source();
int main()
{
	int *p,i;
	p = source();
	printf("elements of array :");
	for(i=0;i<5;i++)
	printf("%5d",p[i]);
return 0;
}
int* source()
{
	static int x[]={12,33,44,55,66};
	return x;
}
	