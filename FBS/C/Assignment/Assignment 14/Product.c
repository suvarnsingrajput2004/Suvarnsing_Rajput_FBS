#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

void store(struct Product *p) {
    printf("Enter Product ID, Name, Quantity, and Price:\n");
    scanf("%d %s %d %f", &p->id, p->name, &p->quantity, &p->price);
}

void display(struct Product p) {
    printf("\nProduct ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", p.id, p.name, p.quantity, p.price);
}

void main() {
    struct Product p1;
    store(&p1);
    display(p1);
}

