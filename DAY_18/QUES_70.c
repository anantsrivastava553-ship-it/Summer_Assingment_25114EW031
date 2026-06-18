// Write a program to Selection sort.
#include <stdio.h>

int main()
{
    int n, i, j, pos, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        pos = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[pos])
            {
                pos = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }

    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}