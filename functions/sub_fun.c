#include<stdio.h>
int sub(int,int);12
int main()
{
	int x,y;
	printf("enter the values of x and y:");
	scanf("%d %d",&x,&y);
	sub(x,y);
	printf("%d",sub(s));
}
int sub(int a,int b)
{
	int s;
	s=a-b;
	return s;
}