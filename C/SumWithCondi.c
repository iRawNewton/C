// Program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.

#include <stdio.h>

void main()
{
    int x, y;
    printf("Enter the value of X and Y:\n");
    scanf("%d %d", &x, &y);
    x == y ? printf("%d", 3 * x) : printf("%d", x + y);
}