#include <stdio.h>

int countBits(int n) {
    int count = 0;

    while (n != 0) {
        count += n & 1;
        n >>= 1;
    }

    return count;
}

int main() {
    int number = 12345;
    int bitCount = countBits(number);

    printf("Number of set bits in %d: %d\n", number, bitCount);

    return 0;
}

/*output:
$ ./15_count_bits
Number of set bits in 12345: 6
*/