#include <stdio.h>

void main() {
    int base, exp, i;
    long long result = 1;
    printf("Enter base ");
    scanf("%d", &base);

    printf("Enter exponent ");
    scanf("%d", &exp);

    for (i = 1; i <= exponent; i++) {
        result = result * base;
    }

    printf("%d%d = %lld", base, exp, result);
}

