#include<stdio.h>
#define PI 3.14
struct circle
{
	int rad;
	float area,cir;


};
void calculate(struct circle*);
int main()
{
	struct circle x;
	printf("enter the radius:");
	scanf("%d",&x.rad);
	calculate(&x);
	printf("area of circle %f",x.area);
	printf("\n circumference of circle %f",x.cir);
return 0;
}
void calculate(struct circle *p)
{
	p->area = PI*(p->rad)*(p->rad);
	p->cir = 2*PI*(p->rad);
}