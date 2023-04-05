#include <stdio.h>
#include<string.h>

int main() {
  char x[30] = "united",y[30]="front";
  char *str1,*str2,*str3;
  str1 = x; str2 =y;
  str3=strcat(str1,str2);
  printf("\n%s",str3);
}
