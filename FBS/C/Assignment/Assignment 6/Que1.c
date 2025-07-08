#include <stdio.h>

// Function declaration
void checkEvenOdd();

int main() {
    // Function call
    checkEvenOdd();
    checkEvenOdd();
}

// Function definition
void checkEvenOdd() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

