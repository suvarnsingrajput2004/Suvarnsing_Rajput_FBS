#include <stdio.h>
void main() {
    int arr[100], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Alternate elements: ");
    for(i = 0; i < n; i += 2)
        printf("%d ", arr[i]);

}

