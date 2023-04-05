#include<stdio.h>
#include<string.h>
//#define max 20
int main()
{
	int low,high,middle;
	char str[8];
	printf("enter the string:\n");
	scanf("%s",str);
	low = 0,high=7;
	middle = (low+high)/2;
	str[middle] = 'p';
	printf("\n element added at %d position\n",middle);
printf("%s\n %d\n",str,strlen(str));
return 0;
}
	