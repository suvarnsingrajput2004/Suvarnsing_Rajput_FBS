#include <stdio.h>
void main() {
    int arr[100],i,n,j,temp;
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter elements for first array\n");
    for(i = 0; i <n; i++)
        scanf("%d", &arr[i]);
        
    for(i=1;i<n-1;i++){
    	for(j=i;j<n;j++){
    		if (arr[i]>arr[j])
    		temp = arr[i];
    		arr[i] = arr[j];
    		arr[j] = temp;
    		
		}
	}
	
	printf("sorted array is:  ");{
	for(i = 0; i <n; i++)
	printf(" %d ",arr[i]);
	}
	
}

