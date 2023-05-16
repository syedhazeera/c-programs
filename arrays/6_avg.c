#include<stdio.h>
int main()
{
	int arr[10],i,sum=0,average;
	for(i=0;i<10;i++)
	{
		printf("enter the elements of array arr[%d] : ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	average = sum/10;
	printf("sum = %d\n average = %d",sum,average);
}

/*output:
enter the elements of array arr[0] : 1
enter the elements of array arr[1] : 2
enter the elements of array arr[2] : 3
enter the elements of array arr[3] : 4
enter the elements of array arr[4] : 5
enter the elements of array arr[5] : 65
enter the elements of array arr[6] : 7
enter the elements of array arr[7] : 8
enter the elements of array arr[8] : 9
enter the elements of array arr[9] : 10
sum = 114
 average = 11

*/