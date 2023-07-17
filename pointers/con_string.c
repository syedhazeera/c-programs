#include <stdio.h>
#include <stdlib.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    while (*str1) {
        *result = *str1;
        str1++;
        result++;
    }

    while (*str2) {
        *result = *str2;
        str2++;
        result++;
    }

    *result = '\0';  // Add null terminator at the end
}

int main() {
    char str1[100];
    char str2[100];
    char result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenateStrings(str1, str2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}


/*output:
Enter the first string: syed 
Enter the second string: hazeera
Concatenated string: syedhazeera
*/