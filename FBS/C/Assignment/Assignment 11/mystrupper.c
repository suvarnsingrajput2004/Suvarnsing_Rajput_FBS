#include <stdio.h>
void mystrupper(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  

    mystrupper(str);  

    printf("Uppercase string: %s\n", str);

    return 0;
}

void mystrupper(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        }
        i++;
    }
}

