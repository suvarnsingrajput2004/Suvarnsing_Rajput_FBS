#include <stdio.h>

int isLeapYear();  // Type 3

int main() {
    if (isLeapYear())
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");
    return 0;
}

int isLeapYear() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

