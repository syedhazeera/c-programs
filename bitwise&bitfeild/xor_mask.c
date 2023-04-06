#include<stdio.h>
int main()
{
	int a,bit,mask = 2;
	printf("enter the integer:\n");
	scanf("%d",&a);
	printf("a = %d\t",a);
	a= a^mask;
	printf("a = %d\t",a);
	a = a^mask;
	printf("a = %d\t",a);
}
/*output:
enter the integer:
5
a = 5   a = 7   a = 5
*/
