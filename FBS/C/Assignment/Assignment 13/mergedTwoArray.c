#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *b, *merged, n1, n2, i, j;

    printf("enter size of first array: ");
    scanf("%d", &n1);

    a = (int *)malloc(n1 * sizeof(int));
    if (a == NULL) {
        printf("memory allocation failed\n");
        return 1;
    }

    printf("enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("enter size of second array: ");
    scanf("%d", &n2);

    b = (int *)malloc(n2 * sizeof(int));
    if (b == NULL) {
        printf("memory allocation failed\n");
        free(a);
        return 1;
    }

    printf("enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    merged = (int *)malloc((n1 + n2) * sizeof(int));
    if (merged == NULL) {
        printf("memory allocation failed\n");
        free(a);
        free(b);
        return 1;
    }

    for (i = 0; i < n1; i++) {
        merged[i] = a[i];
    }

    for (j = 0; j < n2; j++) {
        merged[i + j] = b[j];
    }

    printf("merged array is:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");

    free(a);
    free(b);
    free(merged);

    return 0;
}

