#include <stdio.h>
void main() {
    int arr[100],i,n;
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter elements for first array\n");
    for(i = 0; i <n; i++)
        scanf("%d", &arr[i]);
	
	printf("revers of array is:  ");{
	for(i = i-1; i >= 0; i--)
	printf(" %d ",arr[i]);
	}
	
}

