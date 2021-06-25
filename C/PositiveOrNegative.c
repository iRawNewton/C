// Program to check whether a number is positive or negative

#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 0)
        printf("%d is a neither negative nor positive.\n", a);
    else if (a > 0)
        printf("%d is a positive number.\n", a);
    else
        printf("%d is a negative number.\n", a);
}