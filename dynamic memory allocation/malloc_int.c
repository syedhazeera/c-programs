#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("enter the no of integer to be entered:\n");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory not available");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("enter an integer:\n");
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
		printf("%d\t",*(p+i));
return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/dynamic_memory_allo
$ gcc malloc_int.c -o malloc_int

LENOVO@DESKTOP-KCFUUP4 ~/dynamic_memory_allo
$ ./malloc_int
enter the no of integer to be entered:
4
enter an integer:
1
enter an integer:
2
enter an integer:
3
enter an integer:
4
1       2       3       4
*/