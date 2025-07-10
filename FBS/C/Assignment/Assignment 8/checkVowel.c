#include <stdio.h>

void checkVowel(char ch);  // declaration

void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to consume newline

    checkVowel(ch);
}

void checkVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a Vowel\n", ch);
    else
        printf("%c is a Consonant\n", ch);
}

