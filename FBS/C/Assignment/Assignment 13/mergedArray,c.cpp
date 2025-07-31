#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, i;
    int *a, *b, *merged;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    a = (int *)malloc(n1 * sizeof(int));

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    b = (int *)malloc(n2 * sizeof(int));

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    merged = (int *)malloc((n1 + n2) * sizeof(int));

    // Copy elements
    for (i = 0; i < n1; i++) {
        merged[i] = a[i];
    }
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = b[i];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    free(a);
    free(b);
    free(merged);
    return 0;
}

