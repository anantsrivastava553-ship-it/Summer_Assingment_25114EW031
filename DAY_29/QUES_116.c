// Write a program to Create inventory 
// management system

#include <stdio.h>
#include <string.h>

#define MAX 100

int id[MAX];
char name[MAX][50];
int quantity[MAX];
float price[MAX];
int count = 0;

// Add Product
void addProduct()
{
    printf("\nEnter Product ID: ");
    scanf("%d", &id[count]);

    printf("Enter Product Name: ");
    scanf("%s", name[count]);

    printf("Enter Quantity: ");
    scanf("%d", &quantity[count]);

    printf("Enter Price: ");
    scanf("%f", &price[count]);

    count++;

    printf("\nProduct Added Successfully!\n");
}

// Display Products
void displayProducts()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Products Available!\n");
        return;
    }

    printf("\nID\tName\tQuantity\tPrice\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%d\t\t%.2f\n",
               id[i], name[i], quantity[i], price[i]);
    }
}

// Search Product
void searchProduct()
{
    int searchId, i;

    printf("\nEnter Product ID: ");
    scanf("%d", &searchId);

    for(i = 0; i < count; i++)
    {
        if(id[i] == searchId)
        {
            printf("\nProduct Found!\n");
            printf("ID       : %d\n", id[i]);
            printf("Name     : %s\n", name[i]);
            printf("Quantity : %d\n", quantity[i]);
            printf("Price    : %.2f\n", price[i]);
            return;
        }
    }

    printf("\nProduct Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}