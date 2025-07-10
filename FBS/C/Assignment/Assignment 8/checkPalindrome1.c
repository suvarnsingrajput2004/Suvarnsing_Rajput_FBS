#include <stdio.h>

void checkPalindrome(int n);  // declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkPalindrome(n);
}

void checkPalindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (rev == original)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

