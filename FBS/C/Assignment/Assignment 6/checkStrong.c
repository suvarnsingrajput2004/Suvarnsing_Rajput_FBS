#include <stdio.h>
int factorial(int);
void checkStrong();

int main() {
    checkStrong();
    return 0;
}

int factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) fact *= i;
    return fact;
}

void checkStrong() {
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == n)
        printf("Strong\n");
    else
        printf("Not Strong\n");
}

