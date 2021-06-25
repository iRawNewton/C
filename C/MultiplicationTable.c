// Program to display the multiplication table of a given number

#include <stdio.h>
void main()
{
    int i, n, range, result = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the range: ");
    scanf("%d", &range);
    for (i = 1; i <= range; i++)
    {
        result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }
}