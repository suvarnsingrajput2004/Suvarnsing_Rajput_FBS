#include <stdio.h>

void checkArmstrong(int n);  // declaration

void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkArmstrong(n);
}

void checkArmstrong(int n) {
    int original =n ,sum=0;
    while(n>0){
	
    	int digit = n % 10;
    	sum+= digit*digit*digit;
    	n/=10;
    
    }
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}

