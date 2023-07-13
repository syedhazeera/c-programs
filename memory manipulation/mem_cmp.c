#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *arg[])
{
	int arr1[] = {1,2};
	int arr2[] = {1,2};
	if(memcmp(arr1,arr2, 2 * sizeof(int)) == 0 )
	{	
		printf("arrays are the same\n");
	}
	else
	{
		printf("arrays are not the same\n");
	}
return 0;
}

/*output:
arrays are the same
*/