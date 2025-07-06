#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        rem = n % 10;
        sum += factorial(rem);
        n /= 10;
    }
    if (sum == temp)
        printf("Strong");
    else
        printf("Not Strong");
    return 0;
}

