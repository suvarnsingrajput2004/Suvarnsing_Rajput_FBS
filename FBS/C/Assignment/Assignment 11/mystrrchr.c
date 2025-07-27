#include <stdio.h>

char* mystrrchr(char str[], char ch);

int main() {
    char str[100], ch;
    char* ptr;

    printf("Enter a string: ");
    gets(str);  

    printf("Enter character to search ");
    scanf(" %c", &ch);  

    ptr = mystrrchr(str, ch);

    if (ptr != NULL) {
        printf("Last occurrence of '%c' is at position: %ld\n", ch, ptr - str);
        printf("Substring from last occurrence: %s\n", ptr);
    } else {
        printf("Character '%c' not found in the string\n", ch);
    }

    return 0;
}

char* mystrrchr(char str[], char ch) {
    char* last = NULL;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            last = &str[i];    
        }
        i++;
    }
    return last;  
}

