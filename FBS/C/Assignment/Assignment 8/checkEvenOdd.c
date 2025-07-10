#include <stdio.h>

void checkEvenOdd(int num);  // declaration

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOdd(num);
}

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

