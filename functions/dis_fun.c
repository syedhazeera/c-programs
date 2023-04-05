#include<stdio.h>
void display(int,int);
int main()
{
	int x=5,y=3;
	display(x,y);
	printf("value of x is %d and y is %d",x,y);
	return 0;
}
void display(int p,int q)
{
	p=p+19;
	q=q+23;
	//printf("%d\n%d",p,q);
}