#include <stdio.h>

int sumAlternate(int start, int end);

int main() {
    int start, end;

    printf("Enter start and end range: ");
    scanf("%d %d", &start, &end);

    int sum = sumAlternate(start, end);
    printf("Sum = %d\n", sum);

}

int sumAlternate(int start, int end) {
    int i, sum = 0;
    for ( i = start; i <= end; i += 2) {
        sum += i;
    }
    return sum;
}

