#include <stdio.h>

#define IS_LEAP_YEAR(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (IS_LEAP_YEAR(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

/*output:
Enter a year: 2004
2004 is a leap year.
*/