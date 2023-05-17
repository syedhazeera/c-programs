//print address by using address operator

#include<stdio.h>
int main()
{
	int age =50;
	float sal = 78.90;
	printf("value of age is %d and address of age is %u\n",age,&age);
	printf("value of sal is %f and address of sal is %u\n",sal,&sal);
return 0;
}

/*output:
$ ./1_address
value of age is 50 and address of age is 4294954028
value of sal is 78.900002 and address of sal is 4294954024
*/