#include<stdio.h>
int main()
{
	int num;
	printf("enter num:\n");
	scanf("%d",&num);
	(num&1)?printf("%d is odd",num):printf("%d is even",num);
return 0;

}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/bitwise & bitfeilds
$ gcc ev_odd.c -o ev_odd

LENOVO@DESKTOP-KCFUUP4 ~/bitwise & bitfeilds
$ ./ev_odd
enter num:
7
7 is odd

*/