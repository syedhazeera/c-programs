#include<stdio.h>
#define STRING(x,y) #x"developed by"#y
int main()
{
	char s[] = STRING(PROGRAM,Priya);
	printf("%s\n",s);
return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/preprocessor_directives_linking
$ gcc stringizing.c -o stringizing

LENOVO@DESKTOP-KCFUUP4 ~/preprocessor_directives_linking
$ ./stringizing
PROGRAMdeveloped byPriya
*/