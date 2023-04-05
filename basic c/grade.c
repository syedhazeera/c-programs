#include<stdio.h>
int main()
{
	int m1,m2,m3,avg,total;
	char grade;
	printf("enter the marks of subjects:");
	scanf("%d %d %d",&m1,&m2,&m3);
	total = m1+m2+m3;
	avg = (m1+m2+m3)/3;
	switch(grade)
	{
		case 1:
			if(avg>80)
			grade ='A';
			break;
		case 2:
			if(60>avg<80)
			grade ='B';
			break;
		case 3:
			if(35>avg<60)
			grade ='C';
			break;
		case 4:
			if(avg<35)
			grade= 'D';
			break;
		default :
			printf("FAIL");
			break;
	}
}