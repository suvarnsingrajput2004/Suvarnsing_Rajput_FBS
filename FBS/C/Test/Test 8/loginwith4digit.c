#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main() {
    char userid[20], password[20];
    char correct_user[] = "admin";
    char correct_pass[] = "1234";
    
    printf("Enter UserID: ");
    scanf("%s", userid);
    
    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(userid, correct_user) == 0 && strcmp(password, correct_pass) == 0) {
        srand(time(NULL));
        int rand_num = 1000 + rand() % 8000;
        printf("Verification code: %d\n", rand_num);
        
        int user_input;
        printf("Enter the same number: ");
        scanf("%d", &user_input);
        
        if (user_input == rand_num) {
            printf("Login Success\n");
        } else {
            printf("Verification Failed\n");
        }
    } else {
        printf(" Invalid UserID or Password\n");
    }
}

