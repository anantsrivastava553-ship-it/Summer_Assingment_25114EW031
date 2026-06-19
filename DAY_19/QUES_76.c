// Write a program to Find diagonal sum.

#include <stdio.h>

int main()
{
    int n, i, j;
    int leftSum = 0, rightSum = 0;

    printf("Enter size of square matrix: "); // square matrix because diagonal sum is only defined for square matrices
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        leftSum = leftSum + matrix[i][i];
        rightSum = rightSum + matrix[i][n - 1 - i];  
    }

    printf("Left Diagonal Sum = %d\n", leftSum);
    printf("Right Diagonal Sum = %d\n", rightSum);

    return 0;
}