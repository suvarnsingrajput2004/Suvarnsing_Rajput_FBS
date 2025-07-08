#include <stdio.h>

void printPerfect(int);

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printPerfect(n);
    return 0;
}

void printPerfect(int n) {
    int i, j, sum;
    printf("Perfect numbers: ");
    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            printf("%d ", i);
    }
    printf("\n");
}

