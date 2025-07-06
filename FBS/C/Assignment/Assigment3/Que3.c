#include <stdio.h>
int main() {
    int i, start, end, sum = 0;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    for ( i = start; i <= end; i++) {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}

