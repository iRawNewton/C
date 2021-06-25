// Program to find the reverse of each element in an array and reverse the array

#include <stdio.h>
int reverse(int array[], int range);
void main()
{
    int array[100], i, range;
    printf("Enter the range for the array: ");
    scanf("%d", &range);
    printf("Enter %d elements", range);
    for (i = 0; i < range; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Original Array elements: ");
    for (i = 0; i < range; i++)
    {
        printf("%d |", array[i]);
    }
    reverse(array, range);
    printf("Array elements after reversing: ");
    for (i = 0; i < range; i++)
    {
        printf("%d |", array[i]);
    }
}
int reverse(int array[], int range)
{
    int i, temp, x, rev;
    for (i = 0; i < range; i++)
    {
        rev = 0;
        temp = array[i];
        while (temp != 0)
        {
            x = temp % 10;
            rev = rev * 10 + x;
            temp = temp / 10;
        }
        array[i] = rev;
    }
}