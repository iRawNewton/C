// Program to find product of 2 matrices

#include <stdio.h>
void main()
{
    int a[100][100], b[100][100], c[100][100], i, j, k, rangei, rangej, ranges;
    printf("Enter the range for row and column of Matrix A:\n");
    scanf("%d%d", &rangei, &ranges);
    //Matrix A ---------------------------------------------------------
    printf("Enter value for the matrix A:\n");
    for (i = 0; i < rangei; i++)
    {
        for (k = 0; k < ranges; k++)
        {
            scanf("%d", &a[i][k]);
        }
    }
    printf("Enter the range for column of Matrix B:\n");
    scanf("%d", &rangej);
    //Matrix B ----------------------------------------------------------
    printf("Enter the value for matrix B:\n");
    for (k = 0; k < ranges; k++)
    {
        for (j = 0; j < rangej; j++)
        {
            scanf("%d", &b[k][j]);
        }
    }
    //Displaying Array ---------------------------------------------------
    printf("Display array A:\n");
    for (i = 0; i < rangei; i++)
    {
        for (k = 0; k < ranges; k++)
        {
            printf("%d |", a[i][k]);
        }
        printf("\n");
    }
    printf("Display array B:\n");
    for (k = 0; k < ranges; k++)
    {
        for (j = 0; j < rangej; j++)
        {
            printf("%d |", b[k][j]);
        }
        printf("\n");
    }
    printf("Product of Matrix A x B is: \n");
    for (i = 0; i < rangei; i++)
    {
        for (j = 0; j < rangej; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < ranges; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            printf("%d |", c[i][j]);
        }
        printf("\n");
    }
}