//printing the binary pattern of a 16 bit integer.
#include<stdio.h>
int bit_pattern(int);
int main()
{
	int a;
	printf("enter an integer:\n");
	scanf("%d",&a);
	bit_pattern(a);
}
int bit_pattern(int a)
{
	int i,mask;
	for(i=15;i>=0;i--)
	{
		mask=1<<i;
		if((a&mask)==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
}
/*output:
$ ./bin_pattern
enter an integer:
5
0000000000000101

*/
