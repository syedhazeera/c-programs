#include<stdio.h>
int main()
{
	int i,item,flag=0;
	int a[10] = {0,1,2,3,8,10,11,7,5,4};
	printf("enter the element to be searched:");
	scanf("%d",&item);
	for(i=0;i<10;i++)
	{
		if(item == a[i])
		{
			flag =1;
			printf("search sucessful");
			break;
		}
	}
	if(flag == 0)
	{
		printf("search unsucessful");
	}
}