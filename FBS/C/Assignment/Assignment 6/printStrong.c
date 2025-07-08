#include <stdio.h>

int factorial(int);
void printStrong(int);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printStrong(n);
    return 0;
}

int factorial(int x) {
    int f = 1, i;
    for (i = 1; i <= x; i++)
        f *= i;
    return f;
}

void printStrong(int n) {
    int i, temp, sum, digit;
    printf("Strong numbers: ");
    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    printf("\n");
}

