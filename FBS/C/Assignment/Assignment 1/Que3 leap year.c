#include <stdio.h>

int main() {
    int num,year;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
	year = num;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
 	{
        printf("This is a Leap year .");
    } 
	
	else {
        printf("This is not Leap year .");
    }

    return 0;
}
