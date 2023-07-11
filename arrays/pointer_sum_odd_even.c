#include<stdio.h>
void findsumevenodd(int arr[],int size,int *sumeven,int *sumodd)
{
    *sumeven = 0;
    *sumodd =0;
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            *sumeven+=arr[i];
        }
        else{
            *sumodd+=arr[i];
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sumeven,sumodd;
    findsumevenodd(arr,size,&sumeven,&sumodd);
    printf("sumeven = %d and sumodd = %d",sumeven,sumodd);
return 0;

}


/*output:
sumeven = 30 and sumodd = 25
*/