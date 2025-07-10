#include <stdio.h>

int isArmstrong(int num);  // declaration

void main() {
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d:\n", n);
    for ( i = 1; i <= n; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");
}

int isArmstrong(int num) {
    int original = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return sum == original;
}

