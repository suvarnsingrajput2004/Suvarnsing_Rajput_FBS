#include <stdio.h>

char* mystrchr(char str[], char ch);

int main() {
    char str[100], ch;
    char* ptr;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);  

    ptr = mystrchr(str, ch);

    if (ptr != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, ptr - str);
        printf("Substring from that character: %s\n", ptr);
    } else {
        printf("Character '%c' not found in the string", ch);
    }

    return 0;
}

char* mystrchr(char str[], char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return &str[i];  
        }
        i++;
    }
    return NULL;  
}

