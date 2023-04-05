//write a program to delete all vowels from a sentence.asssume that the sentence is not more than 80 characters long.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i;
	printf("enter any string");
	scanf("%s",str);
	printf("the string is %s\n",str);
	for(i=0;i<=strlen(str);i++)
	{
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	printf(" ");
	else
	printf("%c\t",str[i]);
	
	}
	str[i]='\0';
return 0;
}
