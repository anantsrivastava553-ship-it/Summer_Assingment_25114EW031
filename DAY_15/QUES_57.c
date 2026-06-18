// Write a program to Reverse array.
#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);    // Input array elements
    }

    for (i = 0; i < n / 2; i++) // Loop to reverse the array
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];  // Swap elements
        arr[n - 1 - i] = temp;    // 
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);  // Print reversed array
    }

    return 0;
}