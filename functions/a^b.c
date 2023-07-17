#include <stdio.h>

double power(double a, int b) {
    double result = 1.0;
    int i;

    for (i = 0; i < b; i++) {
        result *= a;
    }

    return result;
}

int main() {
    double base = 2.0;
    int exponent = 3;
    double result = power(base, exponent);

    printf("%.2f\n", result);  // Output: 8.00

    return 0;
}

/*output:
8.00
*/