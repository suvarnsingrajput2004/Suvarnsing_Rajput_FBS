#include <stdio.h>

// Function Declarations
void calculator();
void triangleType();
void greatestOfThree();
void gradeResult();
void studentDiscount();
void divisibilityCheck();
void ageCategory();

int main() {
    calculator();
    triangleType();
    greatestOfThree();
    gradeResult();
    studentDiscount();
    divisibilityCheck();
    ageCategory();
    
}

// Function Definitions

void calculator() {
    int a, b;
    char op;
    printf("\n1. Calculator Operation:\n");
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

void triangleType() {
    int a, b, c;
    printf("\n2. Triangle Type Check:\n");
    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c)
        printf("Triangle is Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Triangle is Isosceles\n");
    else
        printf("Triangle is Scalene\n");
}

void greatestOfThree() {
    int a, b, c;
    printf("\n3. Greatest of Three Numbers:\n");
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c)
            printf("Greatest = %d\n", a);
        else
            printf("Greatest = %d\n", c);
    } else {
        if (b > c)
            printf("Greatest = %d\n", b);
        else
            printf("Greatest = %d\n", c);
    }
}

void gradeResult() {
    int marks;
    printf("\n4. Grade Result:\n");
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 75)
        printf("Distinction\n");
    else if (marks > 65)
        printf("First Class\n");
    else if (marks > 55)
        printf("Second Class\n");
    else if (marks >= 40)
        printf("Pass Class\n");
    else
        printf("Fail\n");
}

void studentDiscount() {
    float price, discount = 0;
    char student;
    printf("\n5. Student Discount Check:\n");
    printf("Enter total price: ");
    scanf("%f", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if (student == 'y' || student == 'Y') {
        if (price > 500)
            discount = 0.20;
        else
            discount = 0.10;
    } else {
        if (price > 600)
            discount = 0.15;
        else
            discount = 0;
    }

    float finalPrice = price - (price * discount);
    printf("Final price after discount = %.2f\n", finalPrice);
}

void divisibilityCheck() {
    int num;
    printf("\n6. Divisibility Check:\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
        printf("Divisible by both 3 and 5\n");
    else if (num % 3 == 0)
        printf("Divisible by 3 but not by 5\n");
    else if (num % 5 == 0)
        printf("Divisible by 5 but not by 3\n");
    else
        printf("Divisible by None\n");
}

void ageCategory() {
    int age;
    printf("\n7. Age Category:\n");
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 12)
        printf("Child\n");
    else if (age <= 19)
        printf("Teenager\n");
    else if (age <= 59)
        printf("Adult\n");
    else
        printf("Senior\n");
}

