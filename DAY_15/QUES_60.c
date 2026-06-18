// Write a program to Move zeroes to end.
#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)  // Loop to move zeroes to the end
    {
        if (arr[i] == 0)    // Check if the current element is zero
        {
            for (j = i + 1; j < n; j++) // Find the next non-zero element
            {
                if (arr[j] != 0) // If a non-zero element is found, swap it with the zero element
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }

    printf("Array after moving zeroes to end:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}