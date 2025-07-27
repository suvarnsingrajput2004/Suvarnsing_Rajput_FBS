#include <stdio.h>

int mystrcmp(char a[], char b[]);

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter a first string: ");
    gets(str1);

    printf("Enter a second string: ");
    gets(str2);

    result = mystrcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal\n");
    }
    else if (result > 0) {
        printf("First string is greater\n");
    }
    else {
        printf("Second string is greater\n"); 
    }

    return 0;
}

int mystrcmp(char a[], char b[]) {
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return a[i] - b[i];
        i++;
    }
    return a[i] - b[i];
}

//bulid in fuction
//
//#include <stdio.h>
//#include <string.h>  
//
//int main() {
//    char str1[100], str2[100];
//    int result;
//
//    printf("Enter first string: ");
//    gets(str1);
//
//    printf("Enter second string: ");
//    gets(str2);
//
//    result = strcmp(str1, str2);  
//
//    if (result == 0)
//        printf("Strings are equal.\n");
//    else if (result > 0)
//        printf("First string is greater.\n");
//    else
//        printf("Second string is greater.\n");
//
//    return 0;
//}

