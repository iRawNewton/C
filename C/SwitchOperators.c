// Program for Switch Operators

#include <stdio.h>
void main()
{
    int a, b;
    char choice;
    float result;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    printf("Enter your choice: \n");
    printf("1. Press '+' to add the two numbers.\n");
    printf("2. Press '-' for subtraction.\n");
    printf("3. Press '*' for multiplication. \n");
    printf("4. Press '/' for divide. \n");
    scanf(" %c", &choice);
    switch (choice)
    {
    case '+':
        result = a + b;
        printf("Addition of %d and %d is %.2f", a, b, result);
        break;
    case '-':
        result = a - b;
        printf("Difference of %d and %d is %.2f", a, b, result);
        break;
    case '*':
        result = a * b;
        printf("Product of %d and %d is %.2f", a, b, result);
        break;
    case '/':
        result = (float)a / b;
        printf("Quotient of %d and %d is %f", a, b, result);
        break;
    default:
        printf("Invalid Choice.");
    }
}