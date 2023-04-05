#include<stdio.h>
#define max 100
int main()
{
	char str[max];
	int i;
	printf("enter your text:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i] = str[i]-32;
		}
	}
	printf("upper case :%s",str);
return 0;
}
	