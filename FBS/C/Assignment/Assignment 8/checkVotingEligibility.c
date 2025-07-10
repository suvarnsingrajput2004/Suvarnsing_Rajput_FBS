#include <stdio.h>

void checkVotingEligibility(int age);  // declaration

void main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    checkVotingEligibility(age);
}

void checkVotingEligibility(int age) {
    if (age >= 18)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");
}

