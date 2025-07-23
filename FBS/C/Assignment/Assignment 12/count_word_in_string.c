#include <stdio.h>
#include <string.h>


int main() {
    char str[200];
    int i, wordCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    // Loop to count words
    for (i = 0; str[i] != '\0'; i++) {
        // If current char is not space and previous is space or i == 0
        if ((i == 0 && str[i] != ' ') || 
            (str[i] != ' ' && str[i-1] == ' ')) {
            wordCount++;
        }
    }

    printf("Number of words: %d\n", wordCount);

    return 0;
}

