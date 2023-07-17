// main.c
#include <stdio.h>
#include "interest.h" // Include the custom interest.h header file

int main() {
    double principal = 1000.0;
    double rate = 5.0;
    double time = 2.5;

    double interest = SIMPLE_INTEREST(principal, rate, time);
    double totalAmount = AMOUNT(principal, rate, time);

    printf("Principal: %.2f\n", principal);
    printf("Rate: %.2f\n", rate);
    printf("Time: %.2f\n", time);
    printf("Simple Interest: %.2f\n", interest);
    printf("Total Amount: %.2f\n", totalAmount);

    return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/preprocessor_directives_linking
$ gcc si_amt_macros.c -o si_amt_macros

LENOVO@DESKTOP-KCFUUP4 ~/preprocessor_directives_linking
$ ./si_amt_macros
Principal: 1000.00
Rate: 5.00
Time: 2.50
Simple Interest: 125.00
Total Amount: 1125.00

*/