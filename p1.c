#include<stdio.h>
int main( )
{
int a,b; 
printf("Enter values for a and b: ");
scanf("%d %d",&a,&b);
printf ("a = %d\t ",a); //bit_pattern(a);
printf ("b = %d \t",b); //bit_pattern (b);
printf("a&b = %d\t\t",a&b);// bit_pattern(a&b);
return 0;
}