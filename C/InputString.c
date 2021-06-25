// Program to input single character, word and sentence

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ch, s[30], sen[100];
    scanf("%c", &ch);       //single charater
    scanf("%s", s);         //Single word
    scanf(" %[^\n]s", sen); //Sentence
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}
