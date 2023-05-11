#include <stdio.h>
#include<string.h>

int main() {
    char input[100];  // Assuming maximum input length of 100 characters
    
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);  // Read input from the user
    
    printf("Words:\n");
    
    char* token = strtok(input, " ");  // Tokenize the input string using space as the delimiter
    
    while (token != NULL) {
        printf("%s\n", token);  // Print each word
        token = strtok(NULL, " ");  // Get the next word
    }
    
    return 0;
}

/*output:
$ ./one_word_perline
Enter a sentence: hiii this is hazeera
Words:
hiii
this
is
hazeera
*/