#include <stdio.h>

int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n = 25;
    int i;

    printf("First %d numbers in the Fibonacci sequence:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");

    return 0;
}

/*output:
First 25 numbers in the Fibonacci sequence:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 
*/