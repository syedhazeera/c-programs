#include<stdio.h>
int display();
int main()
{
	int x;
	x = display();
	printf("the value of x is %d",x);
}
int display()
{
	return 56;

}

/*output:
$ ./return
the value of x is 56

*/
