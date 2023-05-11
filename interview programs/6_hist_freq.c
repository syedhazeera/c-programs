#include <stdio.h>

void print_histogram(const char* input_string) {
    int char_frequency[256] = {0}; // Assuming ASCII characters

    // Count the frequency of each character
    for (int i = 0; input_string[i] != '\0'; i++) {
        char_frequency[(unsigned char)input_string[i]]++;
    }

    // Print the histogram
    printf("Character Histogram:\n");
    for (int i = 0; i < 256; i++) {
        if (char_frequency[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < char_frequency[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}

int main() {
    char input_string[100];

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    print_histogram(input_string);

    return 0;
}

/*output:
$ ./hist_freq
Enter a string: hiithisishazeera
Character Histogram:

: *
a: **
e: **
h: ***
i: ****
r: *
s: **
t: *
z: *

*/