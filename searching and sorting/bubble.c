#include<stdio.h>
int main()
{
	int i,j,temp,a[5] = {40,50,30,20,10};
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=(4-i);j++)
		{
			if(a[j+1]<a[j])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<=4;i++)
	printf("sorted list is %d\n",a[i]);
}