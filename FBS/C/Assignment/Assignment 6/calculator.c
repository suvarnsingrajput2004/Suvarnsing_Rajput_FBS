#include <stdio.h>

// Declaration
void calculator();

int main() {
    calculator();
    return 0;
}

// Definition
void calculator() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    if (op == '+')
        printf("Result = %d\n", a + b);
    else if (op == '-')
        printf("Result = %d\n", a - b);
    else if (op == '*')
        printf("Result = %d\n", a * b);
    else if (op == '/') {
        if (b != 0)
            printf("Result = %.2f\n", (float)a / b);
        else
            printf("Division by zero not allowed\n");
    }
    else if (op == '%')
        printf("Result = %d\n", a % b);
    else
        printf("Invalid operator\n");
}

