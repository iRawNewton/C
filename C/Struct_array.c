// Program for array in Structure

#include <stdio.h>
struct books
{
    int bookID;
    char title[200], author[200];
    float price;
} info[10];
void main()
{
    int i, n;
    printf("Enter the number of books:");
    scanf("%d", &n);
    printf("Enter the book details: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Book ID:\n");
        scanf("%d", &info[i].bookID);
        printf("Enter the title:\n");
        scanf("%s", &info[i].title);
        printf("Enter the author:\n");
        scanf("%s", &info[i].author);
        printf("Enter the price:\n");
        scanf("%f", &info[i].price);
    }

    printf("\n*************************************\n");
    for (i = 0; i < n; i++)
    {
        printf("%d. Book ID:", info[i].bookID);
        printf("%s. title:", info[i].title);
        printf("%s. author:", info[i].author);
        printf("%f. price:", info[i].price);
    }
}