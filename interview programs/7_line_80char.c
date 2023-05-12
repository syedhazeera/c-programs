#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int main() {
    char line[MAX_LINE_LENGTH];
    int length;

    while (fgets(line, MAX_LINE_LENGTH, stdin) != NULL) {
        length = 0;

        // Calculate line length
        while (line[length] != '\0' && line[length] != '\n') {
            length++;
        }

        // Check if line is longer than 80 characters
        if (length > 80) {
            printf("%s", line);
        }
    }

    return 0;
}

/*output:
$ ./7_line_80char
User-level threads and kernel-level threads are two different approaches to implementing thread management in an operating system.
User-level threads and kernel-level threads are two different approaches to implementing thread management in an operating system.
*/