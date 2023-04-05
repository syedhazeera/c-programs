#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	printf("enter the 1st string:");
	scanf("%s",x);
	printf("enter the second string");
	scanf("%s",y);
	if(strcmp(x,y)==0)
	printf("equal");
	else if(strcmp(x,y)>0)
	printf("biggest string is %s",x);
	else
	printf("biggest string is %s",y);
return 0;
}