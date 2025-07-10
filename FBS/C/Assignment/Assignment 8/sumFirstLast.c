#include <stdio.h>

int sumFirstLast(int n);  // declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first and last digit = %d\n", sumFirstLast(n));
}

int sumFirstLast(int n) {
    int last = n % 10;
    int first = n;
    while (first >= 10)
        first /= 10;
    return first + last;
}

