#include <stdio.h>

int main() {
    int i, choice, n, temp, rem, rev = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMenu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (n % 2 == 0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2: {
            int count = 0;
            for ( i = 1; i <= n; i++) {
                if (n % i == 0)
                    count++;
            }
            if (count == 2)
                printf("Prime");
            else
                printf("Not Prime");
            break;
        }

        case 3:
            temp = n;
            rev = 0;
            while (temp > 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            if (rev == n)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:
            if (n > 0)
                printf("Positive");
            else if (n < 0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:
            temp = n;
            rev = 0;
            while (temp > 0) {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp /= 10;
            }
            printf("Reverse = %d", rev);
            break;

        case 6:
            temp = n;
            sum = 0;
            while (temp > 0) {
                rem = temp % 10;
                sum += rem;
                temp /= 10;
            }
            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

