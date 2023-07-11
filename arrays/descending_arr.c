#include<stdio.h>
int main()
{
int i,j,temp,arr[]={90,34,67,85,21};
for(i=0;i<5;i++)
{
    for(j=0;j<4;j++)
    {
        if(arr[j+1]>arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
for(i=0;i<5;i++)
printf("sorted array is %d\n",arr[i]);
}

/*output:
sorted array is 90
sorted array is 85
sorted array is 67
sorted array is 34
sorted array is 21
*/