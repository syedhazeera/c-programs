//program to set nth bit of a number
#include<stdio.h>
int main()
{
	int num,n,newnum;
	printf("enter number and nth bit to set:\n");
	scanf("%d %d",&num,&n);
	newnum = (1<<n)|num;
	printf("bit set successfully:\n");
	printf("before setting %d:%d\n",n,num);
	printf("after setting %d:%d\n",n,newnum);
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/bitwise & bitfeilds
$ ./set_bit
enter number and nth bit to set:
12 0
bit set successfully:
before setting 0:12
after setting 0:13
*/