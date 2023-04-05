#include<stdio.h>
int main()
{
	int a=78;
	float b =65.9;
	char c = 'y';
	void *p = &a,*q=&b,*r =&c;
	printf("%d\n",*(int*)p);
	printf("%f\n",*(float*)q);
	printf("%c\n",*(char*)r);
}
