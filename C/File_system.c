// Program for file system

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("g:\\abc.txt", "a+");
    if (fp == NULL)
    {
        printf("File is not present\n");
        exit(1);
    }

    char ch;
    int n, id;
    float s;
    char name[100];
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication Table:\n");
    printf("--------------------------------\n");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fp, "%d * %d = %d \n", n, i, (n * i));
    }
    printf("--------------------------------\n");
    printf("Enter ID: ");
    scanf("%d", &id);
    fprintf(fp, "id=%d\n", id);

    printf("Enter name: ");
    scanf("%s", name);
    fprintf(fp, "Name=%s\n", name);

    printf("Enter Salary: ");
    scanf("%f", &s);
    fprintf(fp, "Salary=%f\n", s);

    rewind(fp);

    while (1)
    {
        ch = getc(fp);
        if (ch = EOF)
            break;
        printf("%c", ch);
    }
    return 0;
}