#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swap: a = %d, b = %d\n", a, b);
    return 0;
}

