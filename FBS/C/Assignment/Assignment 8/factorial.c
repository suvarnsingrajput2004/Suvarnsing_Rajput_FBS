#include <stdio.h>

int factorial(int n);  // declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", factorial(n));
}

int factorial(int n) {
    int fact = 1,i;
    for ( i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

