#include <stdio.h>
int main() {
    int n, temp, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (rev == temp)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}

