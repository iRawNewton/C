/*  Program to enter two different string and do the following operations:
    a. Copy the 1st string to another (3rd) string.
    b. Join the 2nd & 3rd string.
    c. Compare the 1st and 2nd string.
    d. Display the length of the three strings.
    e. Display the three strings.
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char s1[30], s2[30], s3[30], s4[40];
    int x, l1, l2, l3;
    printf("\nEnter the first string: ");
    scanf("%s", s1);
    printf("\nEnter the second string: ");
    scanf("%s", s2);
    printf("\nString Opearation: ");
    //1. Copy the first string into another (3rd) string
    strcpy(s3, s1);
    printf("\n1. Copy the 1st string into another (3rd) string. 1st string=%s, 3rd string=%s ", s1, s3);
    //2. Join the 2nd string and 3rd string.
    strcat(s4, s2);
    strcat(s4, " ");
    strcat(s4, s3);
    printf("\n2. Join the 2nd string and 3rd string. Joined string = %s ", s4);
    //3. Concate 1st and 2nd string.
    x = strcmp(s1, s2);
    printf("\n3. Compare 1st and 2nd string. Comparison value= %d", x);
    //4. Display the length of the strings
    l1 = strlen(s1);
    l2 = strlen(s2);
    l3 = strlen(s3);
    printf("\n4. Display the length of the 3 strings. 1st string = %d, 2nd string = %d, 3rd string = %d.", l1, l2, l3);
    //5. Display the 3 strings.
    printf("\n5. Display the 3 strings. 1st string = %s, 2nd string = %s, 3rd string = %s", s1, s2, s3);
    printf("\n");
}