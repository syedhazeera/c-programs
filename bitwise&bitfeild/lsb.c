//program to check LSB
#include<stdio.h>
int main()
{
	int num;
	printf("enter the numnber:\n");
	scanf("%d",&num);
	if(num&1)
		printf("lsb %d is set(1).",num);
	else
		printf("lsb %d is unset(0).",num);
return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/bitwise & bitfeilds
$ gcc lsb.c -o lsb

LENOVO@DESKTOP-KCFUUP4 ~/bitwise & bitfeilds
$ ./lsb
enter the numnber:
7
lsb 7 is set(1).
*/