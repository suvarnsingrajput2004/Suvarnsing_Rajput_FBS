#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int num) {
	int i;
    if (num < 2)
        return 0;
    for ( i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int *arr, n, i;

    printf("enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("memory allocation failed\n");
        return 1;
    }

    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nprime numbers in the array are:\n");
    for (i = 0; i < n; i++) {
        if (isprime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    free(arr);
    return 0;
}

