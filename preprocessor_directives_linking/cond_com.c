#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:\n");
	scanf("%d %d",&a,&b);
	#if 5>10
		{
		printf("sum %d",a+b);
		}	
	#else
		{
		if(a==b)
			printf("eqauls");
		elseif(a>b)
			printf("biggest number %d",a);
		else
			printf("biggest numbner %d",b);
		}
	#endif
return 0;
}