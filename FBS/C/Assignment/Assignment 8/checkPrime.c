#include <stdio.h>

void checkPrime(int n);  // declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkPrime(n);
}

void checkPrime(int n) {
    int isPrime = 1,i;
    if (n < 2) isPrime = 0;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}

