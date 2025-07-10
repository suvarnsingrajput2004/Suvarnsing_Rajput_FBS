#include <stdio.h>

int isPerfect(int num);  // declaration

void main() {
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Perfect numbers from 1 to %d:\n", n);
    for ( i = 1; i <= n; i++) {
        if (isPerfect(i))
            printf("%d ", i);
    }
    printf("\n");
}

int isPerfect(int num) {
    int sum = 0,i;
    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

