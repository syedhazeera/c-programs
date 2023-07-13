#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int arr1[] = {3,4};
	int arr2[] = {1,2};
	memset(arr1,0,2 * sizeof(int));
	printf("%d %d\n",arr1[0],arr1[1]);
return 0;
}

/*output:
0 0
*/