#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 30;
    } else if (units <= 150) {
        bill = units *40;
    } else {
        bill = units * 50;
    }


    printf("Total electricity bill: %.2f\n", bill);

    return 0;
}

