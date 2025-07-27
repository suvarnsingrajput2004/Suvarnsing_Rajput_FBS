#include <stdio.h>

void mystrcat(char d[], char s[]);

int main() {
    char str1[100], str2[100];

    printf("Enter a first string: ");
    gets(str1);

    printf("Enter a second string: ");
    gets(str2);

    mystrcat(str1, str2);

    
	printf("concatation string is %s ",str1);
    

    return 0;
}

void mystrcat(char d[], char s[]) {
    int i = 0,j=0;

    while (d[i] !='\0'){
    	i++;
	}
    	
    while (s[j] !='\0'){
    	d[i] = s[j];
    	i++;
    	j++;
	}
    d[i] ='\0';
}
