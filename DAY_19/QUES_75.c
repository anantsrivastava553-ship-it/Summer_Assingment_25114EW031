// Write a program to Transpose matrix.
// Write a program to Transpose matrix.
#include <stdio.h>

int main()
{
    int rows, columns, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose Matrix:\n");
    for(i = 0; i < columns; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}