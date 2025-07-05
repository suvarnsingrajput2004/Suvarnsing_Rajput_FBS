#include <stdio.h>
int main() {
    int m1 = 75, m2 = 80, m3 = 70, m4 = 85, m5 = 90;
    int total = m1 + m2 + m3 + m4 + m5;
    float percent = total / 5.0;
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percent);
    return 0;
}

