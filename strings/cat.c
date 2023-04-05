#include<stdio.h>
#include<string.h>
int main()
{
	char x[50],y[50];
	printf("enter the 1st string:");
	scanf("%s",x);
	printf("enter the second string");
	scanf("%s",y);
	strcat(x,y);
	printf("the resultant string : %s",x);
return 0;
}