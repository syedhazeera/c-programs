#include<stdio.h>
#include<stdlib.h>
void printbytes(int *arr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%08x",arr[i]);
	}
}
	
int main(int argc, char *argv[])
{
	int arr[]={16,31,32,65};
	printbytes(arr,4);
	return 0;
}

/*output:
00000010	0000001f		00000020	00000041
*/