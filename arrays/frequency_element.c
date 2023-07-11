#include <stdio.h>
void findfrequency(int arr[],int size)
{
    int i,j,count;
    int visited[size];
    for(i=0;i<size;i++)
    {
        visited[i]=0;
    }
    for(i=0;i<size;i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        count =1;
        
    
    for(j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        count++;
        
    }
    visited[i]=1;
    printf("element %d occurs%d times.\n",arr[i],count);
    }  
}
int main() 
{
    int arr[]={1,2,2,3,3,3,4,4,4,4};
    int size=sizeof(arr)/ sizeof(arr[0]);
    findfrequency(arr,size);
return 0;
}
    
/*output:
element 1 occurs1 times.
element 2 occurs2 times.
element 2 occurs1 times.
element 3 occurs3 times.
element 3 occurs2 times.
element 3 occurs1 times.
element 4 occurs4 times.
element 4 occurs3 times.
element 4 occurs2 times.
element 4 occurs1 times.
*/
 

   