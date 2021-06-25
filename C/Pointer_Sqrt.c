// Program to find the square root of a number using pointer

#include <stdio.h>
#include <math.h>
void main()
{
    int n, *ptr;
    float res;
    char var;
    printf("Enter a number: ");
    scanf("%d", &n);
    ptr = &n;
    res = (float)sqrt(*ptr);
    printf("Square root of %d is %.2f", n, res);
    printf("\n");
}