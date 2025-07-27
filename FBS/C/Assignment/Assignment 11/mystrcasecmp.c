#include <stdio.h>

int mystrcasecmp(char str1[], char str2[]);

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    result = mystrcasecmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal (case-insensitive).\n");
    } else if (result > 0) {
        printf("First string is greater (case-insensitive).\n");
    } else {
        printf("Second string is greater (case-insensitive).\n");
    }

    return 0;
}

int mystrcasecmp(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        char c1 = str1[i];
        char c2 = str2[i];

        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;

        if (c1 != c2) {
            return c1 - c2;
        }

        i++;
    }

    return str1[i] - str2[i];
}

