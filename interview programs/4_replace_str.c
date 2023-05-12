#include <stdio.h>

int main() {
    int currentChar;
    int previousChar = ' '; // Initialize previousChar with a non-blank character

    while ((currentChar = getchar()) != EOF) {
        if (currentChar == ' ') {
            // Skip additional consecutive spaces
            if (previousChar != ' ')
                putchar(currentChar);
        } else {
            putchar(currentChar);
        }

        previousChar = currentChar;
    }

    return 0;
}

/*output:
$ ./4_replace_str
hii
hii
haji
haji
*/
