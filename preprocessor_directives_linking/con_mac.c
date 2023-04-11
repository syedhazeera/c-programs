#include<stdio.h>
#define MAX 10
int main()
{
	#if defined(MAX)
		printf("hello");
	#else
		printf("world");
	#endif
		printf("\n");
	#if !defined(MIN)
		printf("min not defined");
	#else
		printf("min defined");
	#endif
return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/preprocessor_directives_linking
$ gcc con_mac.c -o con_mac

LENOVO@DESKTOP-KCFUUP4 ~/preprocessor_directives_linking
$ ./con_mac
hello
min not defined
*/