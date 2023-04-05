#include <stdio.h>  
  
struct dob{  
    unsigned char a: 5;  
    unsigned int : 0;  
    unsigned char c: 8;  
};  
  
  
int main() {  
   printf("size of the struct is %ld \n",sizeof(struct dob));  
}  