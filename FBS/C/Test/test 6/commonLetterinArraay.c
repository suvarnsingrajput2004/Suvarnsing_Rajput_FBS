#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int brr[] = {1, 6, 7, 3, 2};
    int size1 = 5, size2 = 5;
    int i, j;

    printf("Common elements: ");
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (arr[i] == brr[j]) {
                printf("%d ", arr[i]);
                break;  
            }
        }
    }

    return 0;
}

