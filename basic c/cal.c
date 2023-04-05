#include<stdio.h>
int main()
{
	int a,b,result;
	char op;
	printf("enter the values of a op b:");
	scanf("%d %c %d",&a,&op,&b);
	switch(op)
	{
	case '+':
		printf("result = %d\n",a+b);
		break;
	case '-':
		printf("result = %d\n",a-b);
		break;
	case '*':
		printf("result = %d\n",a*b);
		break;
	case '/':
		printf("result = %d\n",a/b);
		break;
	}
}

	