#include<stdio.h>
int main()
{
	int i,j,temp,a[5]={45,20,40,5,15};
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	
		printf("selection sorted list is%d",a[i]);
return 0;
}