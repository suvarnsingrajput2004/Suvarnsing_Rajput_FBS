#include <stdio.h>
int isPalindrome();

int main() {
    
    if (isPalindrome())
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

int isPalindrome() {
    int num, first, last;
    printf("Enter a 3-digit number = ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Not a 3-digit number!\n");
        
    }

    first = num / 100;
    last = num % 10;

    if (first == last)
        return 1;
    else
        return 0;
}

