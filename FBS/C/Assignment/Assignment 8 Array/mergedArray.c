#include <stdio.h>
void main() {
    int arr[100], brr[100], merged[100], n1,n2, i,j;
    printf("Enter first size of arrays: ");
    scanf("%d", &n1);

    printf("Enter elements for first array\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter size of  second arrays: ");
    scanf("%d", &n2);

    printf("Enter elements for second array\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &brr[i]);
	
	for(i = 0; i < n1; i++)
	merged[i]= arr[i];
	
	for(j = 0; j < n2; j++)
	merged[i++]=brr[j];
	
	printf("merged of array ");{
	for(i = 0; i < n1+n2; i++)
	printf(" %d ",merged[i]);
	}
	
}

