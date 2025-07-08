#include <stdio.h>

void printArmstrong(int);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printArmstrong(n);
    return 0;
}

void printArmstrong(int n) {
    int i, temp, digit, sum;
    printf("Armstrong numbers: ");
    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    printf("\n");
}

