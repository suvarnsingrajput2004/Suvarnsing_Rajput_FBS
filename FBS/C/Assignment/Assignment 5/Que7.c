#include <stdio.h>
int main() {
    int n = 4, i, j, num = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", num++);
        printf("\n");
    }
    return 0;
}

