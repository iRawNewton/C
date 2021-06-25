/*
Program to define a structure of Employee. Input its member using a pointer object. Display all the members 
of Employee if the salary is more than or equal to 10,000/-.
*/

#include <stdio.h>
struct Employee
{
    int ID, age;
    char name[200];
    float salary;
} * ptrx, *ptry, x, y;
void main()
{
    ptrx = &x;
    ptry = &y;
    printf("Enter Employee 1 Details:\n");
    printf("--------------------------\n");
    printf("Enter the Employee ID: ");
    scanf("%d", &ptrx->ID);
    printf("\nEnter the Employee Name: ");
    scanf("%s", ptrx->name);
    printf("Enter the Employee Age: ");
    scanf("%d", &ptrx->age);
    printf("Enter the Employee Salary: ");
    scanf("%f", &ptrx->salary);

    printf("Enter Employee 2 Details:\n");
    printf("--------------------------\n");
    printf("Enter the Employee ID: ");
    scanf("%d", &ptry->ID);
    printf("\nEnter the Employee Name: ");
    scanf("%s", ptry->name);
    printf("Enter the Employee Age: ");
    scanf("%d", &ptry->age);
    printf("Enter the Employee Salary: ");
    scanf("%f", &ptry->salary);
    printf("\n*************************************\n");

    if (ptrx->salary >= 10000.00)
    {
        printf("\nEmployee ID: %d", ptrx->ID);
        printf("\nEmployee Name: %s", ptrx->name);
        printf("\nEmployee Age: %d", ptrx->age);
        printf("\nEmployee Salary: %f", ptrx->salary);
    }
    else
    {
        printf("\nSalary is less than 10000.\n", ptrx->name);
    }
    printf("\n-------------------------------------\n");
    if (ptry->salary >= 10000.00)
    {
        printf("\nEmployee ID: %d", ptry->ID);
        printf("\nEmployee Name: %s", ptry->name);
        printf("\nEmployee Age: %d", ptry->age);
        printf("\nEmployee Salary: %f", ptry->salary);
    }
    else
    {
        printf("\nSalary is less than 10000.\n", ptry->name);
    }
    printf("\n*************************************\n");
}