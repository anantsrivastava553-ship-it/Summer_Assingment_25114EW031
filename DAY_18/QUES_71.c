// WAP TO BINARY SEARCH
// Binary Search Program
#include <stdio.h>

int main()
{
    int n, i, searchElement;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &searchElement);

    int start = 0;
    int end = n - 1;
    int middle;

    while(start <= end)
    {
        middle = (start + end) / 2;

        if(array[middle] == searchElement)
        {
            printf("Element found at index %d", middle);
            return 0;
        }
        else if(array[middle] < searchElement)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }

    printf("Element not found");

    return 0;
}