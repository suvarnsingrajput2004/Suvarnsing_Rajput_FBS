#include <stdio.h>

// Declaration
void gradeResult();

int main() {
    gradeResult();
    gradeResult();
    return 0;
}

// Definition
void gradeResult() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 75)
        printf("Distinction\n");
    else if (marks > 65)
        printf("First Class\n");
    else if (marks > 55)
        printf("Second Class\n");
    else if (marks >= 40)
        printf("Pass Class\n");
    else
        printf("Fail\n");
}

