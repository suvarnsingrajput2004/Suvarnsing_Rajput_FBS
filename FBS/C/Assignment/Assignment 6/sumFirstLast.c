#include <stdio.h>
void sumFirstLast();

int main() {
    sumFirstLast();
    
		
}

void sumFirstLast() {
    int n, first, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    while (n >= 10) {
        n /= 10;
    }
    first = n;
    printf("Sum = %d\n", first + last);
}

