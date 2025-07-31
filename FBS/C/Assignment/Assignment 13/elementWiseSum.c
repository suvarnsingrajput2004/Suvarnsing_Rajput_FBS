#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *b, *sum, n, i;

    printf("enter size of arrays: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    sum = (int *)malloc(n * sizeof(int));

    if (a == NULL || b == NULL || sum == NULL) {
        printf("memory allocation failed\n");
        return 1;
    }

    printf("enter %d elements of first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("enter %d elements of second array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("element wise sum of two arrays:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    printf("\n");

    free(a);
    free(b);
    free(sum);

    return 0;
}

