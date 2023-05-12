#include <stdio.h>

int stringLength(const char* str) {
    const char* current = str;

    while (*current != '\0') {
        current++;
    }

    return current - str;
}

int main() {
    const char* str = "Hello, World!";
    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}

/*output:
$ ./22_strlen_pointer
Length of the string: 13
*/
