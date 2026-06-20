//Write a program to Find row-wise sum
#include <stdio.h>

int main()
{
    int n, i, j, sum;
    int A[10][10];

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = 0;

        for(j = 0; j < n; j++)
        {
            sum = sum + A[i][j]; // Calculate sum of the current row
        }

        printf("Sum of Row %d = %d\n", i + 1, sum); // i+1 to display row number starting from 1 instead of 0
    }

    return 0;
}