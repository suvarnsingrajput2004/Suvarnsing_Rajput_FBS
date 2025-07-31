#include <stdio.h>

struct HR {
    int id;
    char name[50];
    float salary, commission;
};

void store(struct HR *hr) {
    printf("Enter ID, Name, Salary, and Commission:\n");
    scanf("%d %s %f %f", &hr->id, hr->name, &hr->salary, &hr->commission);
}

void display(struct HR hr) {
    printf("\nID: %d\nName: %s\nSalary: %.2f\nCommission: %.2f\n", hr.id, hr.name, hr.salary, hr.commission);
}

int main() {
    struct HR h1;
    store(&h1);
    display(h1);
}

