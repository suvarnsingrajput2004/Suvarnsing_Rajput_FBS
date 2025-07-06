#include <stdio.h>

int main() {
    int i,age;

    printf("Enter the age: ");
    scanf(" %d", &age); 

    if (age<18) {
        
        printf("not eligible.\n");
        } 
		else {
            printf("Are u eligilbe.\n");
        }
    
    return 0;
}

