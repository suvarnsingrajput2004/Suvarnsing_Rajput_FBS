#include <stdio.h>

void checkPalindrome();

int main() {
    checkPalindrome();
    checkPalindrome();
}

void checkPalindrome() {
    int num, first,last;
    first = num%10;
    last = num%100;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("Not a 3-digit number.\n");
        return;
    }
    
    if (first == last)
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is Not a Palindrome\n", num);
}

