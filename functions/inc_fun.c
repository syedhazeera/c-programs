#include<stdio.h>
void display(int,int,int);
int main()
{
	int x=10;
	display(++x,++x,x++);
	return 0;

}
void display(int p,int q,int r)
{
	printf("%d\t%d\t%d\t",p,q,r);
}