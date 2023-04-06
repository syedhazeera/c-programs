//program to swap the values of 2 variables using bitwise Xor
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the values of x and y:\n"); 
	scanf("%d %d",&x,&y);
	printf("x=%d y=%d\n",x,y);
	x = x^y;
	y = x^y;
	x = x^y;
	printf("x=%d y=%d\n",x,y);
}
/*output:
$ ./swap_xor
enter the values of x and y:
12
78
x=12 y=78
x=78 y=12
*/
