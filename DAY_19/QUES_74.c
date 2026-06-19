// Write a program to Subtract matrices. 

#include <stdio.h>

int main()
{
    int rows, columns, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix1[rows][columns];
    int matrix2[rows][columns];
    int difference[rows][columns];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix Subtraction
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}