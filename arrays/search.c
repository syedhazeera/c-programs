#include<stdio.h>
int main()
{
	int i,item,arr[10]={12,3,5,6,7,8,9,23,21,34};
	printf("enter the element to be searched:");
	scanf("%d",&item);
	for(i=0;i<10;i++)
	{
		if(item = arr[i])
		{
		printf("%d is found at %d position:",item,i+1);
		break;
		}
	}
	if(i==10)
		printf("item %d not found in array",item);
return 0;
}