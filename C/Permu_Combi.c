// Program to find permutation and combination

#include <stdio.h>

int Permutation_Combination(int x);

void main()
{
    int n, r;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    printf("\nEnter the value for r: ");
    scanf("%d", &r);

    printf("Permutation = %d", Permutation_Combination(n) / Permutation_Combination(n - r));
    printf("\n");
    printf("Combination = %d", Permutation_Combination(n) / (Permutation_Combination(r) * Permutation_Combination(n - r)));
}

int Permutation_Combination(int x)
{
    int i, result = 1;
    for (i = x; i >= 1; i--)
    {
        result *= i;
    }
    return result;
}