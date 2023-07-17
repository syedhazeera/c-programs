#include <stdio.h>

void primeFactorsRecursive(int num, int factor) {
    if (num <= 1) {
        return;
    }

    if (num % factor == 0) {
        printf("%d ", factor);
        primeFactorsRecursive(num / factor, factor);
    } else {
        primeFactorsRecursive(num, factor + 1);
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Invalid input. Please enter a positive integer greater than 1.\n");
        return 0;
    }

    printf("Prime factors of %d are: ", num);
    primeFactorsRecursive(num, 2);
    printf("\n");

    return 0;
}

/*output:
Enter a positive integer: 51
Prime factors of 51 are: 3 17 
*/