// Program to display numbers from 1 to 10 using for, while and do while loops

#include <stdio.h>
void main()
{

    int i = 0;
    printf("\n Using while loop. \n"); //While loop
    while (i <= 10)
    {
        printf("%d", i);
        printf("\t");
        i++;
    }

    i = 0;
    printf("\n Using do while loop. \n"); //do While loop
    do
    {
        printf("%d", i);
        printf("\t");
        i++;
    } while (i <= 10);

    printf("\n Using for loop. \n"); //for loop
    for (i = 0; i <= 10; i++)
    {
        printf("%d", i);
        printf("\t");
    }
}