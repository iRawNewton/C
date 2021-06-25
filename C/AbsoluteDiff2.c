/*
Program to get the absolute difference between n and 51.
If n is greater than 51 return triple the absolute difference.
*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, result;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    n > 51 ? printf("%d", abs(3 * (n - 51))) : printf("%d", abs(n - 51));
}