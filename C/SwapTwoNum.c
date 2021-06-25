// Swapping of two number using third variable.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers for variables a, b.\n");
    scanf("%d%d", &a, &b);
    printf("Numbers entered for assigned variables: a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("Numbers after swapping: a= %d, b= %d\n", a, b);
    return 0;
}