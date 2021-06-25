// Program to check if the array is palindrome or not.

#include <stdio.h>
void main()
{
    int array[100], i, j, n, flag = 0;
    printf("Enter the range:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The element in the array are:\n");

    for (i = 0; i <= n / 2 && n != 0; i++)
    {
        if (array[i] != array[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The number is palindrome.\n");
    }
    else
    {
        printf("The number is not palindrome.\n");
    }
}
