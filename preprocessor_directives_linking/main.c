#include<stdio.h>
#include"header.h"
int main()
{
	int a,b,sumresult,subresult;
	printf("enter two integers:\n");
	scanf("%d %d",&a,&b);
	sumresult = add(a,b);
	subresult = sub(a,b);
	printf("sum of two numbers is %d\n",sumresult);
	printf("subtraction of two numbers is %d\n",subresult);
return 0;
}


/*output:
LENOVO@DESKTOP-KCFUUP4 ~/preprocessor_directives_linking
$ gcc -o make main.c addition.c subtraction.c

LENOVO@DESKTOP-KCFUUP4 ~/preprocessor_directives_linking
$ ./make
enter two integers:
12
10
sum of two numbers is 22
subtraction of two numbers is 2

*/	