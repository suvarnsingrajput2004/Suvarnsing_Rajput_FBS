#include <stdio.h>

int main() {
    int start, end, i, j;
    
    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        printf("%d = ", i);
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                printf("%d", j);
                if (j != i) printf(", ");
            }
        }
    printf("\n");
    }

    return 0;
}

