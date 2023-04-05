#include<stdio.h>
struct demo1
{
float x;
int y;
char ch;
};
union demo2
{
float x;
int y;
char ch;
};
int main()
{
struct demo1 var1;
union demo2 var2;
printf("Size of struct variable is %d bytes\n",sizeof(var1));
printf("Size of union variable is %d bytes\n",sizeof(var2));
return 0;
}