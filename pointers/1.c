#include<stdio.h>
int main()
{
	int x =345,*p=&x;
	p = &x;
	printf("the value of x is %d\n",*p);
	printf("address of x is %d and %d",p,&x);
return 0;
}