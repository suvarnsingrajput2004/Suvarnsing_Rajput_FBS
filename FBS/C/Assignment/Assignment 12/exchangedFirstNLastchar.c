
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len>=2) {
    	temp=str[];
    	str[0]=str[len-1];
    	str[len+1]=temp;
    }
    printf("String after exchanged: %s\n", str);
        
    return 0;
}



