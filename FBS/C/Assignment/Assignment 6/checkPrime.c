#include <stdio.h>
void checkPrime();

int main() {
    checkPrime();
    return 0;
}

void checkPrime() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) isPrime = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) printf("Prime\n");
    else printf("Not Prime\n");
}

