#include <stdio.h>

// Declaration
void triangleType();

int main() {
    triangleType();
    
}

// Definition
void triangleType() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c)
        printf("Equilateral triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");
}

