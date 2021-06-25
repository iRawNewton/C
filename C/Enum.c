// Program to find the difference between two days in a week

#include <stdio.h>
int main()
{
    enum week
    {
        mon,
        tue,
        wed,
        thurs,
        fri,
        sat,
        sun
    };
    enum week d1, d2;
    d1 = tue;
    d2 = sat;
    printf("Difference between two days are : %d days\n", d2 - d1);
}