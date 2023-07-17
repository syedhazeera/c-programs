#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1 = 10;
    int num2 = 5;
    int sum, difference;

    sum = add(num1, num2);
    difference = subtract(num1, num2);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}

/*output:
Sum: 15
Difference: 5
*/
