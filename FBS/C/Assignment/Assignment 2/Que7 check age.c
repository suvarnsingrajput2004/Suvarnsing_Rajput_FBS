#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12) {
        printf("You are a Child.\n");
    } else if (age >= 12 && age <= 19) {
        printf("You are a Teenager.\n");
    } else if (age >= 20 && age <= 59) {
        printf("You are an Adult.\n");
    } else if (age >= 60&& age<=100) {
        printf("You are a Senior.\n");
    } else {
        printf("Invalid age entered.\n");
    }

    return 0;
}

