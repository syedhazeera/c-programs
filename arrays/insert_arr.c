// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int arr[100],n,ele,pos,i;
    printf("enter the size  of arrray:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
        
    }
    printf("enter the element and position to be inserted:");
    scanf("%d %d",&ele,&pos);
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
        
    }
    arr[pos] = ele;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
/*output:
/tmp/rT9Yz1fMQt.o
enter the size  of arrray:5
enter the elements of array:1
3
4
5
6
enter the element and position to be inserted:2 1
1
2
3
4
5
6

*/