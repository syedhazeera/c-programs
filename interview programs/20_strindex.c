#include <stdio.h>
#include <string.h>

int strrindex(const char* s, const char* t) {
    int s_len = strlen(s);
    int t_len = strlen(t);
    int i, j, k;

    for (i = s_len - t_len; i >= 0; i--) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
            // Continue matching characters
        }
        if (k == t_len) {
            // Found a match
            return i;
        }
    }

    return -1; // No match found
}

int main() {
    const char* s = "Hello, World!";
    const char* t = "orl";
    int index = strrindex(s, t);

    printf("Rightmost occurrence of '%s' in '%s' is at index %d\n", t, s, index);

    return 0;
}

/*output:
$ ./20_strindex
Rightmost occurrence of 'orl' in 'Hello, World!' is at index 8
*/
