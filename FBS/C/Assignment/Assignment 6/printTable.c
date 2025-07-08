#include <stdio.h>
void printTable();

int main() {
	
    printTable();

}
void printTable(){
	int i,n;
	printf("Enter the number : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		printf("%d \n",n*i);	
	}
	printf("\n");
	
}
