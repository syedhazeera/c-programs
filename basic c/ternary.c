#include <stdio.h>
int main()
{
   int age;
   printf("enter the age:");
   scanf("%d",&age);
   (age>=18) ? (printf("eligible for voting")):(printf("not eligible for voting"));
}