#include <stdio.h>

void mystrncpy(char dest[], char src[], int n);

int main() {
    char str1[100], str2[100];
    int n;

    printf("Enter the  string: ");
    gets(str1);

    printf("Enter number of characters to copy ");
    scanf("%d", &n);

    mystrncpy(str2, str1, n);

    printf("Copied string: %s\n", str2);

    return 0;
}

void mystrncpy(char dest[], char src[], int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    dest[i] = '\0';
}

