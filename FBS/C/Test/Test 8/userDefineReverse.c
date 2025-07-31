#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i, len = strlen(str);
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Reversed string: ");
    reverse(str);
}

