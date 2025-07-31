#include <stdio.h>

// Declare as global variables
float da, ta, hra;

float calcSalary();

int main() {
    float total = calcSalary();
    printf("Total da = %.2f\n", da);
    printf("Total ta = %.2f\n", ta);
    printf("Total hra = %.2f\n", hra);
    printf("Total Salary = %.2f\n", total);
    return 0;
}

float calcSalary() {
    float basic, total;
    printf("Enter basic salary = ");
    scanf("%f", &basic);

    if (basic <= 5000) {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } else {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total = basic + da + ta + hra;
    return total;
}

