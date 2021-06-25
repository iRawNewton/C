// Program to find the difference between between 2 months in a year

#include <stdio.h>
#include <string.h>
int main()
{
    enum Month
    {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };
    enum Month Month1, Month2;
    Month1 = January;
    Month2 = September;
    printf("Difference between January and September is : %d month.\n", Month2 - Month1);
}