#include<stdio.h>
int main()
{
	int i,item,arr[10]={12,3,5,6,7,8,9,23,21,34},flag =0;
	printf("enter the element to be searched:");
	scanf("%d",&item);
	for(i=0;i<10;i++)
	{
		if(item == arr[i])
		{
		printf(" search sucessful %d is found at %d position:",item,i);
		break;
		}
	}
	if(flag = 0)
		printf("search unsucessful");
return 0;
}
/*output:
$ ./search
enter the element to be searched:6
 search sucessful 6 is found at 3 position:

*/
