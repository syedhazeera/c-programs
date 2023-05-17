#include <stdio.h>
#include <string.h>

void reverseWords(char *sentence) {
    // Base case: If the sentence is empty or contains only whitespace
    if (strlen(sentence) == 0 || strspn(sentence, " \t\n") == strlen(sentence)) {
        return;
    }

    // Find the index of the first space in the sentence
    char *firstSpace = strchr(sentence, ' ');

    if (firstSpace == NULL) {
        // No space found, sentence contains only one word
        printf("%s ", sentence);
        return;
    }

    // Split the sentence into two parts: the first word and the remaining sentence
    *firstSpace = '\0'; // Replace the first space with null character
    char *firstWord = sentence;
    char *remainingSentence = firstSpace + 1;

    // Recursively call the function on the remaining sentence
    reverseWords(remainingSentence);

    // Print the first word
    printf("%s ", firstWord);
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove trailing newline character

    printf("Reversed sentence: ");
    reverseWords(sentence);

    return 0;
}

/*output:
$ ./reverse_words
Enter a sentence: hii this is the reverse word program
Reversed sentence: program word reverse the is this hii
*/