#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    char symbol;

    printf("Enter a string: ");
    scnaf("%s",str);

    printf("Enter the special symbol to replace spaces: ");
    scanf("%c", &symbol);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = symbol;
        }
    }

    printf("updated string: %s\n", str);

    return 0;
}

