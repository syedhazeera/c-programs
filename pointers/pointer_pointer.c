#include<stdio.h>
int main()
{
	int a=5;
	int *pa;
	int **ppa;
	pa = &a;
	ppa =&pa;
	printf("address of a=%u,pa=%u and ppa=%u \n",&a,&pa,&ppa);
	printf("value of *pa=%d,*ppa=%d and **ppa=%d\n ",*pa,*ppa,**ppa);
return 0;
}

/*output:
$ ./pointer_pointer
address of a=4294954028,pa=4294954016 and ppa=4294954008
value of *pa=5,*ppa=-13268 and **ppa=5

*/