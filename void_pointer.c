#include<stdio.h>
#include<stdlib.h>
void printbytes(void *arr, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%02x",((char *)arr)[i]);
	}
}
	
int main(int argc, char *argv[])
{
	long long arr[]={16,31,32,65};
	printbytes(arr,4  * sizeof (long long));
	return 0;
}

/*output:
10000000000000001f0000000000000020000000000000004100000000000000
*/