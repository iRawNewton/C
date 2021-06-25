// Program to check whether a number is Armstrong number or not

#include <stdio.h>
#include <math.h>
void main()
{
    int n, temp, rem, count = 0, i;
    float sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        count++;
        temp = temp / 10;
    }
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("\n%d is an Armstrong number.", n);
    }
    else
    {
        printf("\n%d is not an Armstrong number.", n);
    }
}
