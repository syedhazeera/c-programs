#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 0;
    }

    int sum = sumOfNaturalNumbers(num);
    printf("Sum of natural numbers from 1 to %d is %d.\n", num, sum);

    return 0;
}

/*output:
Enter a positive integer: 10
Sum of natural numbers from 1 to 10 is 55.

*/