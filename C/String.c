// Program to display first_name, middle_name, last_name in 3 different strings and display them altogether  in 1 string

#include <stdio.h>
#include <string.h>
void main()
{
    char fn[50], mn[10], ln[10];
    int i;
    printf("Enter the first name: ");
    scanf("%s", fn);
    printf("Enter the middle name: ");
    scanf("%s", mn);
    printf("Enter the last name: ");
    scanf("%s", ln);
    printf("Full name: ");
    strcat(fn, " ");
    strcat(fn, mn);
    strcat(fn, " ");
    strcat(fn, ln);
    printf("%s ", fn);
}