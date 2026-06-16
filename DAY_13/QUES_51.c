// Write a program to Find largest and smallest 
// element
#include <stdio.h>

int main()
{
    int a[10], n, i, large, small;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    large = small = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > large)
            large = a[i];

        if(a[i] < small)
            small = a[i];
    }

    printf("Largest = %d\n", large);
    printf("Smallest = %d", small);

    return 0;
}