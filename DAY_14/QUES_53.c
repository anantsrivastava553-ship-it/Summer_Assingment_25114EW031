// Write a program to Linear search
#include <stdio.h>

int main()
{
    int arr[200], n, num, i, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found.\n");
    }

    return 0;
}