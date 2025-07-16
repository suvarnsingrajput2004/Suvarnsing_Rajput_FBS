#include <stdio.h>
void main() {
    int arr[100], n, i, sum=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
	}
	printf("sum =  %d",sum);


