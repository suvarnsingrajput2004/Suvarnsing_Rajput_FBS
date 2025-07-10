#include <stdio.h>

void checkCase(char ch);  // declaration

void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c

    checkCase(ch);
}

void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase\n", ch);
    else
        printf("%c is not an alphabet character\n", ch);
}

