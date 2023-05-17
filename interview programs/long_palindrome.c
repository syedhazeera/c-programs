#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return 0;  // Not a palindrome
        start++;
        end--;
    }
    return 1;  // Palindrome
}

void findLongestPalindrome(char *str) {
    int len = strlen(str);
    int maxLength = 1;  // Length of the longest palindrome found
    int start = 0;     // Starting index of the longest palindrome

    for (int i = 0; i < len; i++) {
        // Check for odd-length palindromes
        int low = i - 1;
        int high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                maxLength = high - low + 1;
                start = low;
            }
            low--;
            high++;
        }

        // Check for even-length palindromes
        low = i;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                maxLength = high - low + 1;
                start = low;
            }
            low--;
            high++;
        }
    }

    // Print the longest palindrome found
    printf("Longest Palindrome: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline character

    findLongestPalindrome(str);

    return 0;
}

/*output:
$ ./long_palindrome
Enter a string: wowhowwohareera
Longest Palindrome: howwoh

*/