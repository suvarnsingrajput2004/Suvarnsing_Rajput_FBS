#include <stdio.h>

// Function declaration
char* mystrstr(char* haystack, char* needle);

int main() {
    char str[100], substr[100];
    char* result;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring to search: ");
    gets(substr);

    result = mystrstr(str, substr);

    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - str);
        printf("Remaining string from match: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}

// Function to find first occurrence of substring
char* mystrstr(char* haystack, char* needle) {
    int i, j;

    if (*needle == '\0') return haystack;  // Empty substring

    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0'; j++) {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] == '\0')  // Match found
            return &haystack[i];
    }

    return NULL;  // Not found
}

