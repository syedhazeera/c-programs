#include<stdio.h>
#include<limits.h>
 
int main()
{
	int i,arr[9] = {1,2,3,4,5,6,7,8,9};
	
	int largest = INT_MIN,secondlargest = INT_MIN;
	int smallest = INT_MAX,secondsmallest = INT_MAX;
		
	for(i=0;i<9;i++)
	{
	if(arr[i]>largest)
	{
		secondlargest = largest;
		largest = arr[i];
	
	}
	else if(arr[i]>secondlargest && arr[i]!=largest)
	{
		secondlargest = arr[i];
	}

	if(arr[i]<smallest)
	{
		secondsmallest = smallest;
		smallest = arr[i];
	}
	else if(arr[i]<secondsmallest && secondsmallest != arr[i])
	{
		secondsmallest = arr[i];
	}

	}
	printf("second largest is %d and second smallest is %d",secondlargest,secondsmallest);
return 0;
}	
/*output:
$ ./7_sec_max_min
second largest is 8 and second smallest is 2
*/
