#include<stdio.h>
int main()
{
	int max,i,a[5]={1,0,5,7,9};
	max = a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("minimum element value is %d",max);
}