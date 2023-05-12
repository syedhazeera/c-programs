#include <stdio.h>

void printDecimal(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n / 10 > 0) {
        printDecimal(n / 10);
    }

    putchar('0' + (n % 10));
}

int main() {
    int number = 12345;

    printf("Decimal representation: ");
    printDecimal(number);
    printf("\n");

    return 0;
}

/*output:
$ ./21_int_dec
Decimal representation: 12345
*/
