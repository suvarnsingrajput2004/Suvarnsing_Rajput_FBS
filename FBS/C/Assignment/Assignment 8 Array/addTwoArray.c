#include <stdio.h>
void main() {
    int arr[100], brr[100], crr[100], n, i;
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter %d elements for first array\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter %d elements for second array\n");
    for(i = 0; i < n; i++)
        scanf("%d", &brr[i]);

    for(i = 0; i < n; i++)
        crr[i] = arr[i] + brr[i];

    printf("sum of  array : ");
    for(i = 0; i < n; i++)
        printf("%d ", crr[i]);

}

