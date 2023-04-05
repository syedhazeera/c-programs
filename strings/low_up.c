//write a program that converts all lowercase characters in a given string to its equivalent uppercase character
#include<stdio.h>
#include<string.h>
int main()
{
	char str[26];
	int i,j;
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0;i<=strlen(str);i++)
	{
		{
			if(str[i]>=97 && str[i]<=122)
			str[i] = str[i]-32;
		}
	}
	printf("\n the string is upper case %s",str);
	for(j=0;j<=strlen(str);j++)
	{
		{
			if(str[j]>=65 && str[j]<=90)
			str[j] = str[j]+32;
		}
	}
	printf("\n the string is lower case %s",str);
return 0;
}