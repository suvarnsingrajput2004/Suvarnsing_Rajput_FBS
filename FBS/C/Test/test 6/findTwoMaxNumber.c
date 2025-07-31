#include <stdio.h>

int main() {
    int arr[] = {10, 25, 34, 7, 90, 65};
    int n = 6;
    int max1, max2, i;

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("two maximum numbers are: %d and %d\n", max1, max2);

    return 0;
}

