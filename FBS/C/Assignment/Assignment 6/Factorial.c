#include <stdio.h>
void findFactorial();

int main() {
    findFactorial();
    return 0;
}

void findFactorial() {
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %lld\n", fact);
}

