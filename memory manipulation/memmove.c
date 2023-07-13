#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
	char str[] = "start stop";
	printf("%s\n",str);
	memmove(str, str+2,3 * sizeof(char));
	printf("%s\n",str);
	return 0;
}

/*output:
start stop
artrt stop

*/