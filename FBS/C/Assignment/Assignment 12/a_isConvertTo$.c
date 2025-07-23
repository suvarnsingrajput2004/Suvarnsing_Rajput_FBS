#include <stdio.h>

void main() {
    char str[100];
    int i;

    printf("Enter the string: ");
    scanf("%s", str);
    
    for(i=0;str[i]!='\0';i++){
    	if(str[i]=='a'){
    		str[i]='$';
		}
	}
	
	printf("update string : %s",str);

}

