#include <stdio.h>

int sumInRange(int start, int end);  // declaration

void main() {
    int start, end;
    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    printf("Sum = %d\n", sumInRange(start, end));
}

int sumInRange(int start, int end) {
    int sum = 0,i;
    for ( i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

