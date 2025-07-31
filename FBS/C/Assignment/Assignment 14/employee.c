#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void store(struct Employee *e) {
    printf("Enter ID, Name, and Salary:\n");
    scanf("%d %s %f", &e->id, e->name, &e->salary);
}

void display(struct Employee e) {
    printf("\nID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
}

void main() {
    struct Employee e1;
    store(&e1);
    display(e1);
}

