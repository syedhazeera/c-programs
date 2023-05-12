#include <stdio.h>
#include <ctype.h>

int htoi(const char *s) {
    int result = 0;
    int i = 0;

    // Skip optional '0x' or '0X'
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    // Convert hexadecimal digits to integer
    while (s[i] != '\0') {
        int digit = 0;
        if (isdigit(s[i]))
            digit = s[i] - '0';
        else if (isalpha(s[i])) {
            if (isupper(s[i]))
                digit = s[i] - 'A' + 10;
            else
                digit = s[i] - 'a' + 10;
        } else {
            // Invalid character, return 0 or handle error as needed
            return 0;
        }
        
        result = result * 16 + digit;
        i++;
    }
    
    return result;
}

int main() {
    const char *hex = "0x1F"; // Example input
    int value = htoi(hex);
    printf("%d\n", value); // Output: 31
    
    return 0;
}

/*output:
$ ./11_str_hex_int
31
*/
