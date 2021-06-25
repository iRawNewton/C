// Program to find the value of a&b,a|b,a^b,~a,~b,a<<2 and b>>1 for a=5 and b=6

#include <stdio.h>
void main()
{
    int a = 5, b = 6, c;
    printf("\nThe value of a & b = %d", a & b);
    printf("\nThe value of a | b = %d", a | b);
    printf("\nThe value of a ^ b = %d", a ^ b);
    printf("\nThe value of ~a = %d", ~a); //For 2's compliment add 1. Eg. ~a + 1
    printf("\nThe value of ~a+1 (2's Compliment) = %d", ~a + 1);
    printf("\nThe value of ~b = %d", ~b);
    printf("\nThe value of a << 2 = %d", a << 2);
    printf("\nThe value of b >> 1 = %d", b >> 1);
}
