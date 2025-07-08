#include <stdio.h>
void checkPalindrome();

int main() {
    checkPalindrome();
    checkPalindrome();
}

void checkPalindrome() {
    int n, temp, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if (rev == n)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

