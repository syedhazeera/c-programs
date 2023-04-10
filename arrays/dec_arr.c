#include<stdio.h>
int main()
{
	int i,j,num,arr[15];
	printf("enter the decimal number:");
	scanf("%d",&num);
	i=0;
	while(num>0)
	{
		arr[i] = num%2;
		num/=2;
		i++;
	}
	printf("binary number is :");
	for(j=i-1;j>=0;j--)
		printf("%d",arr[j]);
}
/*output:
$ ./dec_arr
enter the decimal number:5
binary number is :101
*/
		
