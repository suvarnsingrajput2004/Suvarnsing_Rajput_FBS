#include <stdio.h>
int isPrime(int num) {
	int i;
    if(num <= 1) return 0;
    for( i = 2; i <= num/2; i++)
        if(num % i == 0)
            return 0;
    return 1;
}
int main() {
    int arr[100], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Prime numbers: ");
    for(i = 0; i < n; i++)
        if(isPrime(arr[i]))
            printf("%d ", arr[i]);

    return 0;
}

