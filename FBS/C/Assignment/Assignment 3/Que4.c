#include <stdio.h>
int main() {
    int i,n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}

