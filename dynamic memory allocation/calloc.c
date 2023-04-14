#include <stdio.h>   

#include <stdlib.h>  
      
void main()  
{     
    int n, *ptr, *p, i, sum = 0;  
    printf (" Enter the number of elements: ");  
    scanf (" %d", &n);  
    ptr = (int *) calloc (n, sizeof(int));  
    p = ptr; 
    if (ptr == NULL)    
    {  
        printf (" Memory is not allocated. ");  
        exit(0);  
    }  
    printf (" Enter %d numbers \n", n);  
    for ( i = 1; i <= n; i++)  
    {  
        scanf ( "%d", ptr);  
        sum = sum + *ptr;  
        ptr++;  
    }  
      
    printf (" Elements are: ");  
    for (i = 1;  i <= n; i++)  
    {  
        printf (" %d", *p);  
    p++;  
    }  
    printf (" \n The addition of the elements is: %d ", sum);  
     
}  

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/dynamic_memory_allo
$ gcc calloc.c -o calloc

LENOVO@DESKTOP-KCFUUP4 ~/dynamic_memory_allo
$ ./calloc
 Enter the number of elements: 3
 Enter 3 numbers
1
2
3
 Elements are:  1 2 3
 The addition of the elements is: 6
*/