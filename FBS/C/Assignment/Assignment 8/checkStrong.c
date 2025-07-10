#include <stdio.h>

int factorial(int n);         // helper declaration
void checkStrong(int n);      // main declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkStrong(n);
}

int factorial(int n) {
    int fact = 1,i
	;
    for ( i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

void checkStrong(int n) {
    int original = n, sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    if (sum == original)
        printf("Strong\n");
    else
        printf("Not Strong\n");
}

