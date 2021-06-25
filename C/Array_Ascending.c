// Program to sort an array in ascending order.

#include <stdio.h>
void main()
{
    int array[100], i, j, range;
    printf("Enter the range:");
    scanf("%d", &range);
    printf("Enter %d elements for the array: \n", range);
    for (i = 0; i < range; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nElements before sorting: \n");
    for (i = 0; i < range; i++)
    {
        printf("%d |", array[i]);
    }
    for (i = 0; i < range; i++)
    {
        for (j = i + 1; j < range; j++)
        {
            if (array[i] > array[j])
            {
                array[i] = array[i] + array[j];
                array[j] = array[i] - array[j];
                array[i] = array[i] - array[j];
            }
        }
    }
    printf("\nElements after sorting:\n");
    for (i = 0; i < range; i++)
    {
        printf("%d |", array[i]);
    }
}