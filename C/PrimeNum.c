// Program to print prime numbers within a range

#include <stdio.h>
void main()
{
    int x, y, i, j, flag;
    printf("\nFind the Prime number within a range.\n");
    printf("Enter the starting range: ");
    scanf("%d", &x);
    printf("\nEnter the ending range: ");
    scanf("%d", &y);
    printf("\nPrime numbers from %d to %d are as follows: \n", x, y);
    for (i = x; i <= y; i++)
    {
        if (i == 1)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
        {
            printf("%d ", i);
        }
    }
}