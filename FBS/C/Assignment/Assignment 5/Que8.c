#include <stdio.h>
int main() {
    int n = 4, i, j;

    // Top Half
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // Bottom Half
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

