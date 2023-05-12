#include <stdio.h>

void convertNumberToCharacters(int number, char* s) {
    sprintf(s, "%d", number);
}

int main() {
    int number = 12345;
    char s[20];

    convertNumberToCharacters(number, s);

    printf("Number: %d\n", number);
    printf("Characters: %s\n", s);

    return 0;
}

/*output:
$ ./18_con_num_char
Number: 12345
Characters: 12345

*/