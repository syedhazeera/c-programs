#include<stdio.h>
int main()
{
	int i,arr[10],even=0,odd=0;
	for(i=0;i<10;i++)
	{
		printf("enter the elements of array arr[%d]:",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2 == 0)
		
			even++;
		else
			odd++;
		
	}
	printf("even numbers = %d and odd numbers = %d",even,odd);
}