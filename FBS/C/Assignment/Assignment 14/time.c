#include <stdio.h>

struct Time {
    int hour, minute, sec;
};

void store(struct Time *t) {
    printf("Enter hour, minute, sec:\n");
    scanf("%d %d %d", &t->hour, &t->minute, &t->sec);
}

void display(struct Time t) {
    printf("Date: %d-%d-%d\n", t.hour, t.minute, t.sec);
}

 main() {
    struct Time t1;
    store(&t1);
    display(t1);
}

