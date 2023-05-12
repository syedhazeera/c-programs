#include <stdio.h>

unsigned int invert(unsigned int x, int p, int n)
{
    unsigned int mask = (~(~0u << n)) << p;
    return x ^ mask;
}

int main() {
    unsigned int number = 0xabcdef12;  // Example number
    int position = 8;                  // Starting position of bits to invert
    int count = 4;                     // Number of bits to invert

    unsigned int result = invert(number, position, count);

    printf("Number before inversion: 0x%x\n", number);
    printf("Number after inversion:  0x%x\n", result);

    return 0;
}

/*output:
Number before inversion: 0xabcdef12
Number after inversion:  0xabcde012
*/