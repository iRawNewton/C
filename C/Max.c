// Program to find the maximum of three numbers using conditional operator

#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Max is : %d", (a > b ? a : b) > c ? (a > b ? a : b) : c);
}