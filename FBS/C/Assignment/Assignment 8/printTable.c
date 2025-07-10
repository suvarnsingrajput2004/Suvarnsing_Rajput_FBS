#include <stdio.h>

void printTable(int n);  // declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printTable(n);
}

void printTable(int n) {
	int i;
    for ( i = 1; i <= 10; i++) {
        printf("%d \n", n * i);
    }
    printf("\n");
}

