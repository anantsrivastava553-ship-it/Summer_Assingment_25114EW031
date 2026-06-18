#include <stdio.h>

int main()
{
    int n, i, last;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    last = arr[n - 1];   // Storing the  last element

    for(i = n - 1; i > 0; i--)       // Loop to rotate the array right
    {
        arr[i] = arr[i - 1];         // Shift elements to the right
    }

    arr[0] = last;   // Place the last element at the beginning

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}