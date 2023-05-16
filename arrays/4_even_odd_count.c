#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5,6},i,even=0,odd=0;
	for(i=0;i<6;i++)
	{
		if(arr[i]%2==0)
		
			even++;
		else
			odd++;
	}	
	printf("event count is %d and odd count is  %d",even,odd);
return 0;
}

/*output:
$ ./4_even_odd_count
event count is 3 and odd count is  3

*/