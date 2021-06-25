// Program to find the maximum number in an array using pointer and a user defined function

#include <stdio.h>
int max(int array[], int range);
void main()
{
    int array[100], range, *ptr, sum = 0;
    float avg;
    printf("Enter the range for the array:");
    scanf("%d", &range);
    ptr = array;
    printf("Enter the values for the array:\n");
    for (ptr = array; ptr < array + range; ptr++)
    {
        scanf("%d", ptr);
    }
    ptr = array;
    max(array, range);
}
int max(int array[], int range)
{
    int *ptr, x;
    ptr = array;
    x = *ptr;
    for (ptr = array; ptr < array + range; ptr++)
    {
        if (x < *ptr)
        {
            x = *ptr;
        }
    }
    printf("Maximum number in the array is: %d", x);
}