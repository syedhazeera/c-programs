//program to find msb
#include<stdio.h>
#define BITS sizeof(int) * 8
int main()
{
	int num,msb;
	printf("enter any number:\n");
	scanf("%d",&num);
	msb = 1 << (BITS -1);
	if(num&msb)
	
		printf("msb of %d is set(1)",num);
	else
		printf("msb of %d is unset(0)",num);
return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/bitwise & bitfeilds
$ gcc msb.c -o msb

LENOVO@DESKTOP-KCFUUP4 ~/bitwise & bitfeilds
$ ./msb
enter any number:
5
msb of 5 is unset(0)

*/