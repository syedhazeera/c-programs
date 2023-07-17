#include <stdio.h>

#define IS_LOWER_CASE(letter) ((letter >= 'a') && (letter <= 'z'))
#define IS_UPPER_CASE(letter) ((letter >= 'A') && (letter <= 'Z'))
#define IS_ALPHABET(character) (IS_LOWER_CASE(character) || IS_UPPER_CASE(character))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    char ch;
    int num1, num2;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if (IS_LOWER_CASE(ch)) {
        printf("The entered letter is a lowercase letter.\n");
    } else {
        printf("The entered letter is not a lowercase letter.\n");
    }

    if (IS_UPPER_CASE(ch)) {
        printf("The entered letter is an uppercase letter.\n");
    } else {
        printf("The entered letter is not an uppercase letter.\n");
    }

    if (IS_ALPHABET(ch)) {
        printf("The entered character is an alphabet.\n");
    } else {
        printf("The entered character is not an alphabet.\n");
    }

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int maxNum = MAX(num1, num2);
    printf("The bigger number is: %d\n", maxNum);

    return 0;
}

/*output:
Enter a letter: d
The entered letter is a lowercase letter.
The entered letter is not an uppercase letter.
The entered character is an alphabet.
Enter two numbers: 34 67
The bigger number is: 67
*/