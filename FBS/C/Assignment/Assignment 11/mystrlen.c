#include <stdio.h>

int mystrlen(char str[]);

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    gets(str);  

    len = mystrlen(str);

    printf("length of string is : %d\n", len);

    return 0;
}

int mystrlen(char str[]){
	int i =0;
	
	while(str[i]!='\0')
	{
		i++;
		
	}
	return i;
}
