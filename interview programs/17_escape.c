#include <stdio.h>

void escape(const char* t, char* s) {
    char c;
    int i = 0;
    int j = 0;

    while ((c = t[i]) != '\0') {
        switch (c) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            // Add more cases for other special characters if needed
            default:
                s[j++] = c;
                break;
        }

        i++;
    }

    s[j] = '\0';
}

int main() {
    const char* t = "Hello,\n\tWorld!";
    char s[100];

    escape(t, s);

    printf("Original: %s\n", t);
    printf("Escaped: %s\n", s);

    return 0;
}

/*output:
$ ./17_escape
Original: Hello,
        World!
Escaped: Hello,\n\tWorld!
*/
