#include<stdio.h>
void swap(int*,int*);
int main()
{
	int x,y;
	printf("enter the values of x and y:");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("%d\n %d",x,y);
	
}
void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p =*q;
	*q = temp;
}