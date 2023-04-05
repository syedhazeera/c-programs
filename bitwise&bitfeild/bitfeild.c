#include <stdio.h>  
  
struct dob{  
    unsigned int date: 5;  
    unsigned int month: 4;  
    unsigned int year: 12;  
};  
  
  
int main() {  
   printf("size of the struct is %ld \n",sizeof(struct dob));  
   struct dob myDOB={06,11,2001};  
   printf("my dob is %d-%d-%d",myDOB.date,myDOB.month,myDOB.year);  
}  