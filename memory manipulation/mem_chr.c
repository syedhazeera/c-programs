#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int arr1[] = {3,4};//0003 0004
	int arr2[] = {1,2};
	if(memchr(arr1,0,2 * sizeof(int)) != NULL )
	{
		printf("found the byte\n");
	}
	else
	{
		printf("did not find the byte \n");
	}
	return 0;
return 0;
}

/*output:
found the byte
*/
