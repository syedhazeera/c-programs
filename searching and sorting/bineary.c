#include<stdio.h>
#define MAX 10
int main()
{
	int low,high,middle,key,flag=0,a[MAX]={1,2,3,4,5,6,7,8,9,10};
	printf("enter the key element");
	scanf("%d",&key);
	low = 0,high = MAX-1;
	while(low<=high)
	{
		middle = (low+high)/2;
		if(key==a[middle])
		{
			flag =1;
			printf("\n element found at %d position",middle);
			break;
		}
		else if(key<a[middle])
		high = middle-1;
		else
		low = middle+1;
	}
	if(flag = 0)
	printf("\n element not found at %d position",middle);
}