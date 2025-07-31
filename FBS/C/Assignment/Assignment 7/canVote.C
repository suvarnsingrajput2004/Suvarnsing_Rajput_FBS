#include<stdio.h>
char isUpperLowerCase();

int main() {
  
    if (isUpperLowerCase())
        printf("UppperCase\n");
    else
        printf("LowerCase\n");
 }

char isUpperLowerCase() {
    char ch;
    printf("Enter character = ");
    scanf("%c", &ch);

    if (ch >'A'&& ch <'Z' )
        return 1;
    else
        return 0;
}

