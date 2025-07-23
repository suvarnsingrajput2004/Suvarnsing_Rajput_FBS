//#include <stdio.h>
//#include<string.h>
//
//int main() {
//    char str[100];
//    int i,len,index;
//
//    printf("Enter the string: ");
//    scanf("%s", str);
//    
//    printf("Enter the index u want to remove: ");
//    scanf("%d", index);
//    
//if (index < 0 || index >= len) {
//        printf("Invalid index.\n");
//    } else {
//        // Shift characters to left from the index
//        for (i = index; i < len; i++) {
//            str[i] = str[i + 1];
//        }
//
//        printf("String after removal: %s\n", str);
//    }
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, index, len;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

   
    printf("Enter index to remove: ");
    scanf("%d", &index);

    len = strlen(str);

    if (index < 0 || index >= len) {
        printf("Invalid index.\n");
    } else {
    
        for (i = index; i < len; i++) {
            str[i] = str[i + 1];
        }

        printf("String after removal: %s\n", str);
    }

    return 0;
}



