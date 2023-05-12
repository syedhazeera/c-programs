#include <stdio.h>
#include <string.h>

void reverse(char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        left++;
        right--;
    }
}

int main() {
    char line[1000];

    while (fgets(line, sizeof(line), stdin) != NULL) {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

/*output:
$ ./9_rev_str
hazeera

areezah
*/
