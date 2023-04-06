//program to convert binary pattern to integer
#include<stdio.h>
int main()
{
	char bit;
	int i,num=0;
	printf("enter any bit pattern less than or equal to 16:\n");
	for(i=0;i<=15;i++)
	{
		bit =getchar();
		if(bit == '0')
			num=num<<1;
		else if(bit=='1')
			num=(num<<1)+1;
		else
			break;
	}
	printf("hexadecimal : %x\n",num);
	printf("decimal: %d\n",num);
}