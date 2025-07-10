#include <stdio.h>

int isPrime(int num);  // declaration

void main() {
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d:\n", n);
    for (i = 2; i <= n; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int isPrime(int num) {
	int i;
    if (num < 2) return 0;
    for ( i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

