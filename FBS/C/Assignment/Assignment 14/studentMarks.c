#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void store(struct Student *s) {
    printf("Enter Roll No, Name, and Marks:\n");
    scanf("%d %s %f", &s->rollNo, s->name, &s->marks);
}

void display(struct Student s) {
    printf("\nRoll No: %d\nName: %s\nMarks: %.2f\n", s.rollNo, s.name, s.marks);
}

void main() {
    struct Student s1;
    store(&s1);
    display(s1);
    
    struct Student s2;
    store(&s2);
    display(s2;);
    
    struct Student s3;
    store(&s3);
    display(s3;);
}

