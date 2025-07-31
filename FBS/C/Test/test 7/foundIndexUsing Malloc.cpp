#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, key, found = 0;

    printf("Enter size of array");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element %d found at position %d\n", key, i + 1);
    else
        printf("Element %d not found in array\n", key);

    free(arr);
    return 0;
}












