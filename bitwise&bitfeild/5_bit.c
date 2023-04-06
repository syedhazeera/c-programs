#include<stdio.h>
int main()
{
	int a,bit,mask = 0x20;
	printf("enter an integer:\n");
	scanf("%d",&a);
	printf("%d\n",a);
	if((a&mask)==0)
		bit =0;
	else
		bit =1;
	printf("5th bit is %d\n",bit);
return 0;
}