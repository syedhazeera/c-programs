#include<stdio.h>
int main()
{
	int x=10,*p=&x,**q=&p,***r=&q;
	printf("%d %d %d %d",x,*p,**q,***r);
	printf("%x %x %x %x",&x,&p,&q,&r);
return 0;
}