#include<stdio.h>
int main()
{
	int i,arr[]={1,2,3,4,5};
	int *ptr;
	ptr=arr;
	for(i=0;i<5;i++)
	{
		printf("value = arr[i]=%d\n",arr[i]);	
	}
}

/*output:
$ ./arr_p
value = arr[i]=1
value = arr[i]=2
value = arr[i]=3
value = arr[i]=4
value = arr[i]=5*/