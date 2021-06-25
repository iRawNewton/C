// Program to check if the array is palindrome or not.

#include <stdio.h>
void main()
{
    int array[100], arrayRev[100], i, j, range, flag = 0;
    printf("Enter the range for the array: ");
    scanf("%d", &range);
    printf("\nEnter %d elements for the array: \n", range);
    for (i = 0; i < range; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nThe elements in the array are: \n");
    for (i = 0; i < range; i++)
    {
        printf("%d |", array[i]);
    }
    //*****************
    j = 0;
    for (i = range - 1; i >= 0; i--) //reverse loop
    {
        arrayRev[j] = array[i];
        j++;
    }
    //******************
    j = 0;
    //for (i = range - 1; i >= 0; i--) //checking loop
    for (i = 0; i <= range - 1; i++)
    {
        if (arrayRev[j] != array[i])
        {
            flag = 1;
            break;
        }
        j++;
    }
    //printf("flag=%d", flag);
    printf("\nThe elements in the array when reversed are: \n");
    for (i = 0; i < range; i++)
    {
        printf("%d |", arrayRev[i]);
    }
    if (flag == 0)
    {
        printf("\n The entered array is Palindrome array.");
    }
    else
    {
        printf("\nThe entered array is not Palindrome array.");
    }
}