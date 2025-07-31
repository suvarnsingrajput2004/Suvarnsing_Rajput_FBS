#include<stdio.h>
int isVowel();

int main() {
    
    if (isVowel())
        printf("Vowel\n");
    else
        printf("Consonant\n");
 }

int isVowel() {
    char ch;
    printf("Enter character = ");
    scanf(" %c", &ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;
    else
        return 0;
}

