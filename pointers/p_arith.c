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

/*output:
$ ./p_arith
value of pi = address of a = 4294954004
value of pc = address of b = 4294954003
value of pf = address of c = 4294953996
now value of pi = 4294954008
now value of pc = 4294954004
now value of pf = 4294954000
*/
	
	
