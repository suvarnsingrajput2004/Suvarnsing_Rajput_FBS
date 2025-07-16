#include <stdio.h>
void main() {
    int arr[100], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Even numbers: ");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);

    printf("\nOdd numbers: ");
    for(i = 0; i < n; i++)
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);

}

