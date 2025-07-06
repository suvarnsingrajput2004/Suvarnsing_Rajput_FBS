#include <stdio.h>
int main() {
    int n, i, temp, rem, sum;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}

