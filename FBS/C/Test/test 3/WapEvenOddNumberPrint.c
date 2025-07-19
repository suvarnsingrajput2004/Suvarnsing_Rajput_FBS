#include <stdio.h>

void printEven(int start, int end);
void printOdd(int start, int end);

void main() {
    int start, end;

    printf("Enter start and end range: ");
    scanf("%d %d", &start, &end);

    printf("Odd numbers: ");
    printOdd(start, end);

    printf("\nEven numbers: ");
    printEven(start, end);
}

void printOdd(int start, int end) {
	int i;
    for ( i = start; i <= end; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
}

void printEven(int start, int end) {
	int i;
    for ( i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

