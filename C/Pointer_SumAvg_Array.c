// Program to find the sum and average of an array using pointer without using the index variable

#include <stdio.h>
void main()
{
    int array[100], range, *ptr, sum = 0, i;
    float avg;
    printf("Enter the range for the array:");
    scanf("%d", &range);
    printf("Enter the values for the array:\n");
    for (i = 0; i < range; i++)
    {
        scanf("%d", &array[i]);
    }
    ptr = array;
    for (i = 0; i < range; i++)
    {
        sum = sum + (*ptr);
        ptr++;
    }
    avg = (float)sum / range;
    printf("\nSum is %d \n average is %.2f\n", sum, avg);
}