#include<stdio.h>
struct point
{
	int x;
	int y;
};
int main()
{
	int i;
	struct point a[]={{34,56},{22,34},{45,89}};
	struct point *p;
	p=a;
	for(i=1;i<=3;i++)
	{
		printf("x=%d\ty=%d\n",p->x,p->y);
		p++;
	}
return 0;
}