#include <stdio.h>

int mystrncmp(char str1[], char str2[], int n);

int main() {
    char str1[100], str2[100];
    int n, result;

    printf("Enter first string: ");
    gets(str1);  

    printf("Enter second string: ");
    gets(str2);

    printf("Enter number of characters to compare: ");
    scanf("%d", &n);

    result = mystrncmp(str1, str2, n);

    if (result == 0)
        printf("First %d characters are equal.\n", n);
    else if (result > 0)
        printf("First string is greater in first %d characters.\n", n);
    else
        printf("Second string is greater in first %d characters.\n", n);

    return 0;
}

int mystrncmp(char str1[], char str2[], int n) {
    int i = 0;

    while (i < n && str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];  
        i++;
    }

    if (i < n)
        return str1[i] - str2[i];

    return 0;
}

