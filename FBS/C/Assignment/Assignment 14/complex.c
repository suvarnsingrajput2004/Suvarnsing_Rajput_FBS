#include <stdio.h>

struct Complex {
    float real, imaginary;
};

void store(struct Complex *c) {
    printf("Enter Real and Imaginary part:\n");
    scanf("%f %f", &c->real, &c->imaginary);
}

void display(struct Complex c) {
    printf("Complex Number: %.2f + %.2fi\n", c.real, c.imaginary);
}

void main() {
    struct Complex c1;
    store(&c1);
    display(c1);
}

