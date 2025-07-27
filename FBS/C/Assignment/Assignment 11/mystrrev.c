#include <stdio.h>
void mystrrev(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  

    mystrrev(str);  

    printf("Reversed string: %s\n", str);

    return 0;
}

void mystrrev(char str[]) {
    int i = 0, j = 0;
    char temp;


    while (str[j] != '\0') {
        j++;
    }
    j--;  


    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

