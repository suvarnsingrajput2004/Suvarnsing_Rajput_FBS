#include <stdio.h>
void checkArmstrong();

int main() {
    checkArmstrong();
    return 0;
}

void checkArmstrong() {
    int n, temp, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}

