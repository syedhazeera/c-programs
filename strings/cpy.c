#include<stdio.h>
#include<string.h>
int main()
{
	int x[50],y[50];
	printf("enter the string :");
	scanf("%s",x);
	strcpy(y,x);
	printf("%s",y);
}