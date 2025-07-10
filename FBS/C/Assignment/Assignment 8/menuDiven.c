#include <stdio.h>

void checkEvenOdd(int n);
void checkPrime(int n);
void checkPalindrome(int n);
void checkSign(int n);
void reverseNumber(int n);
void sumOfDigits(int n);

void main() {
    int choice, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Sum of Digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: checkEvenOdd(num); break;
        case 2: checkPrime(num); break;
        case 3: checkPalindrome(num); break;
        case 4: checkSign(num); break;
        case 5: reverseNumber(num); break;
        case 6: sumOfDigits(num); break;
        default: printf("Invalid Choice\n");
    }
}

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

void checkPrime(int n) {
    int isPrime = 1,i;
    if (n < 2) isPrime = 0;
    for ( i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
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

void checkSign(int n) {
    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

void reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed Number = %d\n", rev);
}

void sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
}

