#include <stdio.h>

struct SalesManager {
    int id;
    char name[50];
    float salary, incentive, target;
};

void store(struct SalesManager *sm) {
    printf("Enter ID, Name, Salary, Incentive, and Target:\n");
    scanf("%d %s %f %f %f", &sm->id, sm->name, &sm->salary, &sm->incentive, &sm->target);
}

void display(struct SalesManager sm) {
    printf("\nID: %d\nName: %s\nSalary: %.2f\nIncentive: %.2f\nTarget: %.2f\n", sm.id, sm.name, sm.salary, sm.incentive, sm.target);
}

int main() {
    struct SalesManager s1;
    store(&s1);
    display(s1);
}

