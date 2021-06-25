// Program to add numbers using function and array

#include <stdio.h>
int addition(int array[], int range);
void main()
{
    int array[100], i, range;
    printf("Enter range: ");
    scanf("%d", &range);
    printf("\nEnter %d elements: \n", range);
    for (i = 0; i < range; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Sum of the elements present in the array is %d", addition(array, range));
}
int addition(int array[], int range)
{
    int i, sum = 0;
    for (i = 0; i < range; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}