#include <stdio.h>

// Declaration
void studentDiscount();

int main() {
    studentDiscount();
    return 0;
}

// Definition
void studentDiscount() {
    float price, discount = 0;
    char student;
    printf("Enter total price: ");
    scanf("%f", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if (student == 'y' || student == 'Y') {
        if (price > 500)
            discount = 0.20;
        else
            discount = 0.10;
    } else {
        if (price > 600)
            discount = 0.15;
        else
            discount = 0;
    }

    float finalPrice = price - (price * discount);
    printf("Final price after discount = %.2f\n", finalPrice);
}

