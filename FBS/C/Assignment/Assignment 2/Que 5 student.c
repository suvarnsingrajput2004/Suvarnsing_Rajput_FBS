#include <stdio.h>

int main() {
    float price, discount = 0.0, final_price;
    char isStudent;


    printf("Enter total purchase amount: ");
    scanf("%f", &price);

   
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent); 
    
    if (isStudent == 'y' || isStudent == 'Y') {
        if (price > 500) {
            discount = 0.20;
        } else {
            discount = 0.10;
        }
    } else {
        if (price > 600) {
            discount = 0.15;
        } else {
            discount = 0.0;
        }
    }


    final_price = price - (price * discount);
    
    printf("Discount applied: %.0f%%\n", discount * 100);
    printf("Final price after discount: %.2f\n", final_price);

    return 0;
}

