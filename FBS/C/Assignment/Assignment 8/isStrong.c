#include <stdio.h>

int isStrong(int num);     // main logic
int factorial(int n);      // helper

void main() {
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (isStrong(i))
            printf("%d ", i);
    }
    printf("\n");
}

int factorial(int n) {
    int fact = 1,i;
    for ( i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int isStrong(int num) {
    int original = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original;
}

