#include<stdio.h>
struct point{
	int x;
	int y;
	};
 struct point* getref();
int main()
{
	struct point *p;
	p = getref();
	printf("x=%d\ty=%d",p->x,p->y);
return 0;
}
struct point* getref()
{
	static struct point a={34,55};
	return &a;
}