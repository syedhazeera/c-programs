#include <stdio.h>

long long decimalToBinary(int decimalNum) {
    long long binaryNum = 0;
    int remainder, place = 1;

    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * place;
        place *= 10;
    }

    return binaryNum;
}

int binaryToDecimal(long long binaryNum) {
    int decimalNum = 0;
    int base = 1;

    while (binaryNum > 0) {
        int lastDigit = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += lastDigit * base;
        base *= 2;
    }

    return decimalNum;
}

int main() {
    int option, decimalNum;
    long long binaryNum;

    printf("Select an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binaryNum);
            int decimalResult = binaryToDecimal(binaryNum);
            printf("Decimal equivalent: %d\n", decimalResult);
            break;

        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimalNum);
            long long binaryResult = decimalToBinary(decimalNum);
            printf("Binary equivalent: %lld\n", binaryResult);
            break;

        default:
            printf("Invalid option selected.\n");
    }

    return 0;
}

/*output:
Select an option:
1. Binary to Decimal
2. Decimal to Binary
Option: 1
Enter a binary number: 101
Decimal equivalent: 5


Select an option:
1. Binary to Decimal
2. Decimal to Binary
Option: 2
Enter a decimal number: 5
Binary equivalent: 101

*/