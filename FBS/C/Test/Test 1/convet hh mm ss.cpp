#include <stdio.h>

int convertToSeconds(); 

int main() {
    int total = convertToSeconds();
    printf("Total seconds = %d\n", total);
}

int convertToSeconds() {
    int hh, mm, ss;
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &hh, &mm, &ss);
    return (hh * 3600 + mm * 60 + ss);
}

