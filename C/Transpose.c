// Program to display the transpose of a matrix

#include <stdio.h>
void main()
{
    int array[100][100], i, j, row, column;
    printf("Enter the range for Rows and Columns: \n");
    scanf("%d%d", &row, &column);
    printf("\nEnter the elements in the format of %d x %d for the 2D array: \n", row, column);
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("Elements of a matrix in the format of %d x %d in 2D array\n", row, column);
    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix in the format of %d x %d in 2D array :\n", column, row);
    for (j = 0; j < row; j++)
    {
        for (i = 0; i < column; i++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");
    }
}