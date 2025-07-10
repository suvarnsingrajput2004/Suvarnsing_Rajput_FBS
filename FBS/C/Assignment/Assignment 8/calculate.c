#include <stdio.h>

void calculate(int a, int b, char op);  // declaration

void main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    calculate(a, b, op);
}

void calculate(int a, int b, char op) {
    switch(op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        case '%': 
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Cannot mod by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
}

