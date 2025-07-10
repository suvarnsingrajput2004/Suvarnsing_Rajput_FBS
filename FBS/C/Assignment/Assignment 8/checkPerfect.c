#include <stdio.h>

void checkPerfect(int n);  // declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkPerfect(n);
}

void checkPerfect(int n) {
    int sum = 0,i;
    for ( i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        printf("Perfect\n");
    else
        printf("Not Perfect\n");
}

