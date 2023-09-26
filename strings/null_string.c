#include<stdio.h>
int main()
{
	char buffer[100] = " ";
	printf("enter the name: ");
	scanf("%s",buffer);
	printf("hello,%s!",buffer);
return 0;
}

/*output:
$ ./null_string
enter the name: hazeera
hello,hazeera!

*/