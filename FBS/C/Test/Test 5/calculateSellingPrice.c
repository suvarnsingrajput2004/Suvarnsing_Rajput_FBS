#include <stdio.h>

float calculateSellingPrice(float costPrice, float discount) {
    float sellingPrice;
    
    if (discount >= 0) {
        if (discount <= 100) {
            sellingPrice = costPrice - (costPrice * discount / 100);
        } else {
            printf("Invalid discount\n");
            sellingPrice = costPrice;
        }
    } else {
        printf("Discount cannot be negative.\n");
        sellingPrice = costPrice;
    }
    
    return sellingPrice;
}

int main() {
    float cp, discount, sp;
    
    printf("Enter cost price of book");
    scanf("%f", &cp);
    printf("Enter discount percentage");
    scanf("%f", &discount);
    
    sp = calculateSellingPrice(cp, discount);
    
    printf("Selling Price of the book: %.2f\n", sp);
    return 0;
}

