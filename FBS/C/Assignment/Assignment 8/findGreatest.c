#include <stdio.h>

void findGreatest(int a, int b, int c);  // declaration

void main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    findGreatest(a, b, c);
}

void findGreatest(int a, int b, int c) {
    if (a > b) {
        if (a > c)
            printf("%d is greatest\n", a);
        else
            printf("%d is greatest\n", c);
    } else {
        if (b > c)
            printf("%d is greatest\n", b);
        else
            printf("%d is greatest\n", c);
    }
}

