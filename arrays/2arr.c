#include<stdio.h>
int main()
{
int a[50][50],b[50][50],i,j,n,m;
printf("enter the matrix dimension:");
scanf("%d %d",&n,&m);
printf("enter the %d %d\n",n,m);
for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	
	scanf("%d",&a[i][j]);
printf("the given matrix is :\n");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	printf(" %d",a[i][j]); 
	printf("\n");
}
return 0;
}
/*output:
$ ./2arr
enter the matrix dimension:2
2
enter the 2 2
1
2
3
4
the given matrix is :
 1 2
 3 4
*/
