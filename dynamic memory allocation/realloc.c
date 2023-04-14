#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char *str;
	str = (char*)malloc(10);
	strcpy(str,"computer");
	printf("address of the string  %s is %d\n",str,str);
	str = (char*)realloc(str,40);
	strcpy(str,"embedded system design");
	printf("address of string  %s is %d",str,str);
	free(str);
}

/*output:
$ gcc realloc.c -o realloc

LENOVO@DESKTOP-KCFUUP4 ~/dynamic_memory_allo
$ ./realloc
address of the string  computer is 944
address of string  embedded system design is 66608


*/