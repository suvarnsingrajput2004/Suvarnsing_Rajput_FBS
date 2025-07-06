#include <stdio.h>

int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, i, temp, sum, rem;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            rem = temp % 10;
            sum += factorial(rem);
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}

