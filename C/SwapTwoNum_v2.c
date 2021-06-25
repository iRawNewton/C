// Swapping of two number without using third variable

#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers for variables a, b.\n");
    scanf("%d%d", &a, &b);
    printf("Numbers entered for assigned variables: a=%d, b=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Numbers after swapping: a=%d, b=%d\n", a, b);
}