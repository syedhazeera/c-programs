//program to read a file and display contents with its line numbers.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs;
	char ch;
	int i=1;
	fs = fopen("hello.c","r");
	if(fs == NULL)
	{
		printf("can't open source file ");
		exit(1);
	}
	while(1)
	{
		ch = fgetc(fs);
		if(ch == EOF)
		{
			break;
		}
		printf("%c",ch);
		if(ch == '\n')
		{
			printf("%d",i);
			i++;
		}
	}
	fclose(fs);
return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/data_files
$ gcc read_file.c -o read_file

LENOVO@DESKTOP-KCFUUP4 ~/data_files
$ ./read_file
#include<stdio.h>
1void main()
2{
3       printf("hello world!\n");
4}

*/