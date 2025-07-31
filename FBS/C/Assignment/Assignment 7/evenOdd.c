#include<stdio.h>
int evenOdd();

int main() {
    
    if (evenOdd())
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}

int evenOdd() {
    int no;
    printf("Enter any number = ");
    scanf("%d", &no);

    if (no % 2 == 0)
        return 1;
    else
        return 0;
}

