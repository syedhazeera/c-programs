#include<stdio.h>
int main()
{
	int a=5,*pi = &a;
	char b='x',*pc = &b;
	float c=5.5,*pf = &c;
	printf("value of pi = address of a = %u\n",pi);
	printf("value of pc = address of b = %u\n",pc);
	printf("value of pf = address of c = %u\n",pf);
	pi++;
	pc++;
	pf++;
	printf("now value of pi = %u\n",pi);
	printf("now value of pc = %u\n",pc);
	printf("now value of pf = %u\n",pf);
return 0;
}
	
	