#include<stdio.h>
int main()
{
	int num,i,mask;
	printf("enter a number:\n");
	scanf("%d",&num);
	printf("twos complement is :");
	for(i=0;i<=15;i++)
	{
		mask = 1<<i;
		if((num&mask)!=0)
		break;
	}
	for(i=i+1;i<=15;i++)
	{
		mask=1<<i;
		num = num^mask;
	}
	printf("twos complement is :%d\n",num);
return 0;
}
/*output:
$ ./2com
enter a number:
5
twos complement is :twos complement is :65531

*/
