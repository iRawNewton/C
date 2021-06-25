// Program to display the grade of a student for 5 subjects, each of 100 marks

#include <stdio.h>
void main()
{
    int i, avg = 0, array[5], total = 0;
    float per = 0;
    printf("Enter the marks of 5 subjects: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 5; i++)
    {
        total = total + array[i]; //total
    }
    avg = total / 5;
    per = (float)total / 5;
    switch (avg / 10)
    {
    case 10:
        printf("\nStudent has scored grade A1 in the examination with percentage %.2f", per);
        break;
    case 9:
        printf("\nStudent has scored grade A2 in the examination with percentage %.2f", per);
        break;
    case 8:
        printf("\nStudent has scored grade B1 in the examination with percentage %.2f", per);
        break;
    case 7:
        printf("\nStudent has scored grade B2 in the examination with percentage %.2f", per);
        break;
    case 6:
        printf("\nStudent has scored grade C1 in the examination with percentage %.2f", per);
        break;
    case 5:
        printf("\nStudent has scored grade C2 in the examination with percentage %.2f", per);
        break;
    case 4:
        printf("\nStudent has scored grade D in the examination with percentage %.2f", per);
        break;
    case 3:
    case 2:
    case 1:
        printf("\nStudent has failed in the examination with percentage %.2f", per);
        break;
    default:
        printf("\nInvalid entry");
    }
}