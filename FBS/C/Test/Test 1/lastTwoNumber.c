#include <stdio.h>

int lastTwoNumber();  

int main() {
    int res = lastTwoNumber();
    printf("Last two digit : %2d",res);
    
}

int lastTwoNumber() {
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    return num%100;
}

