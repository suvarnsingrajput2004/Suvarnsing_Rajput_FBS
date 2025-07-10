#include <stdio.h>

void printOneToTen();  // declaration

void main() {
    printOneToTen();
}

void printOneToTen() {
	int i;
    for ( i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

