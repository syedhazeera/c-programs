//write a program to sort a set of names stored in array in alphabetical order.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count;
	char str[25][25],temp[25];
	printf("how many strings u are going to enter?:");
	scanf("%d",&count);
	printf("enter string one by one:");
	for(i=0;i<count;i++){
	scanf("%s",str[i]);
	}
	for(i=0;i<count;i++)
	{
	for(j=i+1;j<count;j++)
	{
		if(strcmp(str[i],str[j])>0)
		{
			strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);
		}
	}
	}
	printf("order of sorted strings:");
	for(i=0;i<=count;i++)
	puts(str[i]);
return 0;
}			