// Online C compiler to run C program online
// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int arr[100],n,pos,i;
    printf("enter the size  of arrray:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
        
    }
    printf("enter the position to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<=n-1;i++)
    {
        arr[i] = arr[i+1];
        
    }
    
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*output:
/tmp/HYhq9kV7wR.o
enter the size  of arrray:5
enter the elements of array:1
2
3
4
5
enter the position to be deleted:2
1
2
4
5

*/