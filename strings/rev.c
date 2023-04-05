#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	printf("enter the string:");
	scanf("%s",x);
	strrev(x);
	printf("reverse of string: %s",x);
return 0;
}
