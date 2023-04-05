//write a program to find number of occurence of vowels ,constants,words,spaces,and special characters in the given statement(use ctype.h)
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int vowels,consonant,digit,space,specialchar;
	vowels=consonant=digit=space=0;
	printf("enter the statement:\n");
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i]!='\0';++i)
	{
	str[i] = tolower(str[i]);
	if(str[i]='a'||str[i]='e'||str[i]='i'||str[i]='o'||str[i]='u')
	{
		++vowels;
	}
	elseif((str[i]>='a' )&& (str[i]<='z'))
	{	
		++consonant;
	}
	elseif((str[i]>='0') && (str[i]<='9'))
	{
		++digit;
	}
	elseif(str[i] == ' ')
	{
		++space;
	}
	else
	specialchar++;
	}
	printf("vowels:%d",vowels);
	printf("\nconsonants:%d",consonant);
	printf("\ndigits: %d",digit);
	printf("\n white spaces :%d",space);
	printf("\n special characters :%d",specialchar);
return 0;
}


	
	