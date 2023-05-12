#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeTrailingWhitespace(char* str) {
    int len = strlen(str);
    int i = len - 1;

    // Traverse from the end of the string
    while (i >= 0 && isspace(str[i])) {
        str[i] = '\0'; // Replace trailing whitespace with null character
        i--;
    }
}

int main() {
    char str[] = "Hello, World!    \t\n";
    
    printf("Before: '%s'\n", str);
    removeTrailingWhitespace(str);
    printf("After: '%s'\n", str);

    return 0;
}

/*output:
$ ./19_trailingblanks_tabs
Before: 'Hello, World!
'
After: 'Hello, World!'
*/