//program for use of malloc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char *str;
	if((str = (char*)malloc(10)==NULL))
	{
		printf("out of memory\n");
	
	}
	strcpy(str,"hello");
	printf("string is %s\n",str);
	free(str);
}

/*OUTPUT:
string is hello*/
