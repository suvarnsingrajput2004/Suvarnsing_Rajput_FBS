#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Check if number is a valid 3-digit number
    if (num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.");
        return 1;
    }

    first = num / 100;     // Extract first digit
    last = num % 10;       // Extract last digit

    if (first == last) {
        printf("This is a palindrome number.");
    } else {
        printf("This is not a palindrome number.");
    }

    return 0;
}

