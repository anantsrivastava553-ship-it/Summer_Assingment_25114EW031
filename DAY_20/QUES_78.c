// Write a program to Check symmetric matrix. 
#include <stdio.h>

int main()
{
    int n, i, j;
    int A[10][10];
    int isSymmetric = 1;

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
        for(j = 0; j < n; j++)
        {
            if(A[i][j] != A[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    if(isSymmetric)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is Not Symmetric");

    return 0;
}