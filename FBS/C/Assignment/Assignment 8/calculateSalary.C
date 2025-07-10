#include <stdio.h>

float calculateSalary(float basic);  // declaration

int main() {
    float basic, total;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    total = calculateSalary(basic);
    printf("Total Salary = %.2f\n", total);
}

float calculateSalary(float basic) {
    float da, ta, hra, total;

    if (basic <= 5000) {
        da = 0.10 * basic;
        ta = 0.20 * basic;
        hra = 0.25 * basic;
    } else {
        da = 0.15 * basic;
        ta = 0.25 * basic;
        hra = 0.30 * basic;
    }

    total = basic + da + ta + hra;
    return total;
}

