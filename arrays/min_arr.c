#include<stdio.h>
int main()
{
	int i,arr[10]={1,3,5,6,7,10,34,0,23,3},min,max;
	min=max=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		if(arr[i]>max)
		max=arr[i];
	}
	printf("minimum = %d,maximum=%d", min,max);
}
