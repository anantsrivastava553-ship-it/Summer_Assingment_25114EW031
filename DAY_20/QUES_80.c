// Write a program to Find column-wise sum.

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

    for(j = 0; j < n; j++)
    {
        sum = 0;

        for(i = 0; i < n; i++)
        {
            sum = sum + A[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, sum);
    }

    return 0;
}