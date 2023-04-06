//program to test any bit in an integer
#include<stdio.h>
int main()
{
	int a,bit,mask,bitposition;
	printf("enter an integer:\n and bit position:\n");
	scanf("%d %d",&a,&bitposition);
	mask = 1<<bitposition;
	printf("a=%d\t",a);
	if((a&mask)==0)
		bit =0;
	else
		bit =1;
	printf("the bit at position %d is %d\n",bitposition,bit);
}
		
