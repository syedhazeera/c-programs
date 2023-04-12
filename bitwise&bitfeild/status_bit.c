//c program to get the nth bit of a number
#include<stdio.h>
int main()
{
	int num,n,bitstatus;
	printf("enter number and nth bit to check:\n");
	scanf("%d %d",&num,&n);
	bitstatus = (num>>n)&1;
	printf("the %d bit is set to %d",n,bitstatus);
return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/bitwise & bitfeilds
$ ./status_bit
enter number and nth bit to check:
5 7
the 7 bit is set to 0

*/