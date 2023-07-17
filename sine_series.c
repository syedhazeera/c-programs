#include <stdio.h>
#include <math.h>

double evaluateSineSeries(double x, int terms) {
    double sum = 0.0;
    int i;
    double power = x;
    int factorial = 1;
    int sign = 1;

    for (i = 1; i <= terms; i += 2) {
        sum += sign * (power / factorial);
        power *= x * x;
        factorial *= (i + 1) * (i + 2);
        sign *= -1;
    }

    return sum;
}

int main() {
    double x = 1.0;  // Example value for x
    int terms = 10;  // Number of terms to evaluate

    double result = evaluateSineSeries(x, terms);
    printf("sin(%lf) = %.6lf\n", x, result);

    return 0;
}

/*output:
sin(1.000000) = 0.841471
*/