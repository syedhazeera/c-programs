#include<stdio.h>
struct point
{
 int x;
 int y;
};
struct point getpoint();
int main()
{
	struct point p;
	p = getpoint();
	printf("x=%d\ny=%d",p.x,p.y);
	return 0;
}
struct point getpoint()
{
	struct point a = {43,78};
	return a;
}