#include <stdio.h>

void checkPalindrome(int num);  // declaration

void main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    checkPalindrome(num);
}

void checkPalindrome(int num) {
    int original = num;
    int rev = 0;

    if (num >= 100 && num <= 999) { 
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        if (original == rev)
            printf("Number is a Palindrome\n");
        else
            printf("Number is Not a Palindrome\n");
    } else {
        printf("Please enter a 3-digit number\n");
    }
}

