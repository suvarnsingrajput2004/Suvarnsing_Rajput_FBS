#include<stdio.h>
int isLeap();

int main() {
 
    if (isLeap())
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");

}

int isLeap() {
    int year;
    printf("Enter year = ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

