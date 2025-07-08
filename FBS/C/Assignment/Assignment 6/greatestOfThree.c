#include <stdio.h>

// Declaration
void greatestOfThree();

int main() {
    greatestOfThree();
    return 0;
}

// Definition
void greatestOfThree() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c)
            printf("Greatest = %d\n", a);
        else
            printf("Greatest = %d\n", c);
    } else {
        if (b > c)
            printf("Greatest = %d\n", b);
        else
            printf("Greatest = %d\n", c);
    }
}

