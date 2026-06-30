// Write a program to Create menu-driven array 
// operations system. 
#include <stdio.h>

int arr[100], n = 0;

// Function to insert elements
void insert()
{
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements inserted successfully!\n");
}

// Function to display array
void display()
{
    int i;

    if(n == 0)
    {
        printf("Array is empty!\n");
        return;
    }

    printf("Array Elements: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to search an element
void search()
{
    int key, i, found = 0;

    if(n == 0)
    {
        printf("Array is empty!\n");
        return;
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found!\n");
}

// Function to find maximum
void maximum()
{
    int i, max;

    if(n == 0)
    {
        printf("Array is empty!\n");
        return;
    }

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Maximum Element = %d\n", max);
}

// Function to find minimum
void minimum()
{
    int i, min;

    if(n == 0)
    {
        printf("Array is empty!\n");
        return;
    }

    min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Minimum Element = %d\n", min);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== ARRAY OPERATIONS SYSTEM =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Find Maximum\n");
        printf("5. Find Minimum\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                maximum();
                break;

            case 5:
                minimum();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}