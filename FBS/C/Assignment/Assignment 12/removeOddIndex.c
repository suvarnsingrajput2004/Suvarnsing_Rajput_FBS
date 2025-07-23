#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str); 

    
    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0'; 
    printf("after removing odd index characters: %s\n", result);

    return 0;
}

