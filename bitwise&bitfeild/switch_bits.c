//program to switch on all the bits in an integer variable
#include<stdio.h>
int main()
{
	int a,mask,i;
	printf("enter the value of integer:\n");
	scanf("%d",&a);
	printf("%d\t",a);
	for(i=0;i<=15;i++)
	{
		mask = 1<<i;
		a = a|mask;
	}
	printf("%d\t",a);
}
/*output:
$ ./switch_bits
enter the value of integer:
5
5       65535
*/
