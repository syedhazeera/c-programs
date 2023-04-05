#include<stdio.h>
void process(int[],int);
int main()
{
	int a[]={1,4,5,6,46},i;
	process(a,5);
	printf("elements of array after fun call : ");
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
return 0;
}
void process(int *p,int n)
{
	int i;
	for(i=0;i<5;i++)
	*(p+i) = *(p+i)+10;
}
	