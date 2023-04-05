#include<stdio.h>
int main()
{
	int *p,x;
	p=&x;
	*p = 400;
	printf("%d\n",*p);
	*p = *p+200;
	printf("%d",*p);
}