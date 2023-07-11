
#include <stdio.h>
void findminmax(int arr[],int size, int *min,int *max)
{
    if(size==0)
    {
        return;
    }
    *min = arr[0];
    *max = arr[0];
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i] < *min)
        {
        *min = arr[i];
        }
        if(arr[i]>*max)
        {
            *max = arr[i];
        }
    }
   // printf("%d %d",max,min);
    
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,88,67};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *min,*max;
    findminmax(arr,size,&min,&max);
    printf("min = %d\nmax = %d",min,max);
return 0;
}

/*output:
min = 1
max = 88
*/