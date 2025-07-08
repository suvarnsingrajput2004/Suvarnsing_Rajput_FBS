#include <stdio.h>

void menuProgram();

int main() {
    menuProgram();
    
}

void menuProgram() {
    int i, num, option, temp, digit, sum = 0, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Even or Odd\n");
    printf("2. Prime or Not\n");
    printf("3. Palindrome or Not\n");
    printf("4. Positive, Negative, or Zero\n");
    printf("5. Reverse the number\n");
    printf("6. Sum of digits\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf(num % 2 == 0 ? "Even\n" : "Odd\n");
            break;

        case 2: {
            int flag = 1;
            if (num <= 1) flag = 0;
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    flag = 0;
                    break;
                }
            }
            printf(flag ? "Prime\n" : "Not Prime\n");
            break;
        }

        case 3:
            temp = num;
            while (temp > 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            printf(rev == num ? "Palindrome\n" : "Not Palindrome\n");
            break;

        case 4:
            if (num > 0) printf("Positive\n");
            else if (num < 0) printf("Negative\n");
            else printf("Zero\n");
            break;

        case 5:
            temp = num;
            rev = 0;
            while (temp > 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            printf("Reversed = %d\n", rev);
            break;

        case 6:
            temp = num;
            sum = 0;
            while (temp > 0) {
                digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            printf("Sum of digits = %d\n", sum);
            break;

        default:
            printf("Invalid choice!\n");
    }
}

