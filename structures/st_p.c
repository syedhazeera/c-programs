#include<stdio.h>
struct box
{
	int b;
	int w;
	int h;
};
void main()
{
	struct box b={10,20,30};
	struct box *p;
	p=&b;
	printf("three sides of box : %d\t%d\t%d",(*p).b,p->w,(*p).h);
}