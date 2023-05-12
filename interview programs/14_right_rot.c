#include <stdio.h>

unsigned int rightrot(unsigned int x, int n) {
    int bitCount = sizeof(unsigned int) * 8;
    n = n % bitCount;  // Ensure n is within the range of valid bit positions

    if (n > 0) {
        unsigned int rightPart = x >> n;
        unsigned int leftPart = x << (bitCount - n);
        x = rightPart | leftPart;
    }

    return x;
}

int main() {
    unsigned int number = 0xabcdef12;  // Example number
    int rotation = 4;                  // Number of positions to rotate

    unsigned int result = rightrot(number, rotation);

    printf("Number before rotation: 0x%x\n", number);
    printf("Number after rotation:  0x%x\n", result);

    return 0;
}


/*output:
$ ./14_right_rot
Number before rotation: 0xabcdef12
Number after rotation:  0x2abcdef1
*/