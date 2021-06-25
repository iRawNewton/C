// Program to reverse a string

#include <stdio.h>
#include <string.h>
void main()
{
    char fn[50];
    int i, j = 0;
    printf("Enter a string: ");
    scanf("%s", fn);
    for (i = 0; fn[i] != '\0'; i++)
    {
        j++;
    }
    for (i = j - 1; i >= 0; i--)
    {
        printf("%c", fn[i]);
    }
}