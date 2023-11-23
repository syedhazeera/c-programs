#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool pal(const char* str)
{
    int len = strlen(str);
    int i,j;
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            return false;
        
        }
    }
    return true;
}
int main()
{
    const char *str ="radar";
    printf("original string is %s\n ",str);
    if(pal(str))
    printf("string is palindrome");
    else
    printf("string is not palindrome");
    return 0;
}

/*output:
original string is radar
 string is palindrome
*/