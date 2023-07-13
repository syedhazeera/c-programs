#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[])
{
	time_t secondsFromEpoch = time(NULL);	
	srand(secondsFromEpoch);
	printf("%d\n",rand());
	printf("%d\n",rand());
	printf("%d\n",rand());
return 0;
}
	
/*output:
1815733739
3737135
1621407544
*/
