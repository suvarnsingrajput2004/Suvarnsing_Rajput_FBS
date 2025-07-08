#include<stdio.h>
void checkVowelConsonant();
void main(){
	checkVowelConsonant();
	checkVowelConsonant();
}
void checkVowelConsonant() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("%c is a Vowel\n", ch);
        else
            printf("%c is a Consonant\n", ch);
    } else {
        printf("Invalid input.\n");
	}
}
