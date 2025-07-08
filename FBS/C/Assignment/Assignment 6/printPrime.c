#include <stdio.h>

void printPrime(int);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printPrime(n);
    return 0;
}

void printPrime(int n) {
    int i, j, flag;
    printf("Prime numbers: ");
    for (i = 2; i <= n; i++) {
        flag = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
    printf("\n");
}

