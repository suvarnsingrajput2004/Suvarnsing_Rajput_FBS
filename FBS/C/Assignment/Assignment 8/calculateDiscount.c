#include <stdio.h>

float calculateDiscount(float price, char isStudent);  // declaration

void main() {
    float price, finalPrice;
    char isStudent;

    printf("Enter price: ");
    scanf("%f", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);

    finalPrice = calculateDiscount(price, isStudent);
    printf("Final Price after discount = %.2f\n", finalPrice);
}

float calculateDiscount(float price, char isStudent) {
    float discount = 0;

    if (isStudent == 'y' || isStudent == 'Y') {
        if (price > 500)
            discount = 0.20 * price;
        else
            discount = 0.10 * price;
    } else {
        if (price > 600)
            discount = 0.15 * price;
    }

    return price - discount;
}

