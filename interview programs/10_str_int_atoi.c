#include <stdio.h>
#include <ctype.h>

int atoi(const char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Skip leading whitespace
    while (isspace(str[i]))
        i++;

    // Check for optional sign
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convert digits to integer
    while (isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

int main() {
    const char *numStr = "12345"; // Example input
    int num = atoi(numStr);
    printf("%d\n", num); // Output: 12345

    return 0;
}

/*output:
$ ./10_str_int_atoi
12345

*/
