#include <stdio.h>

float deposit(float balance, float amount) {
    return balance + amount;
}

float withdraw(float balance, float amount) {
    if (balance < 3000) {
        printf("Can't withdraw. Balance is less than 3000.\n");
        return balance;
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
        return balance;
    } else {
        return balance - amount;
    }
}

int main() {
    float balance, amount;
    int choice;
    
    printf("Enter initial balance: ");
    scanf("%f", &balance);
    
    printf("Choose option: 1. Deposit  2. Withdraw\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        balance = deposit(balance, amount);
    } else if (choice == 2) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        balance = withdraw(balance, amount);
    } else {
        printf("Invalid choice.\n");
    }

    printf("Updated Balance: %.2f\n", balance);
    
    return 0;
}

