#include <stdio.h>

int main() {
    char ch;

    printf("Enter the character: ");
    scanf(" %c", &ch); 

    if (ch>='a'&& ch<='z') {
        
        printf("This is lowecase.\n");
    } 
	else if(ch>='A'&& ch<='Z')
		
        printf("This  is Uppercase.\n");
        
    else{
    	printf("This is not an alphabet.\n");
	}
        
    
    return 0;
}

