#include<stdio.h>
void checkEligibility();

void main(){
	checkEligibility();
	checkEligibility();
}
void checkEligibility() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");
}

