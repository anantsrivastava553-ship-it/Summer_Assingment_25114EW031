// Write a program to Rotate array left. 
#include <stdio.h>

int main()
{
    int n, i, first;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    first = arr[0];   // Store first element

    for(i = 0; i < n - 1; i++)       // Loop to rotate the array left
    {
       arr[i] = arr[i + 1];       // Shift elements to the left
    }

    arr[n - 1] = first;           // Place the first element at the end

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}