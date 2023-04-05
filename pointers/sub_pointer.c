#include<stdio.h>
void *sub(int,int);
int main()
{
	int *p,x,y;
	printf("enter the values of x and y:");
	scanf("%d %d",&x,&y);
	p=sub(x,y);
	printf("value of *p is %d",*p);
	return 0;
}
void *sub(int p,int q)
{
	 static int x;
	x=p-q;
	return &x;
	printf("%d",&x);
}
	