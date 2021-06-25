// Program to find binary of any number

#include <stdio.h>
void main()
{
    int temp, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &temp);
    do
    {
        rem = temp % 2;
        sum = sum * 10 + rem;
        temp = temp / 2;
    } while (temp >= 1);
    printf("%d", sum);
}