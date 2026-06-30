// Write a program to Create library 
// management system.
#include <stdio.h>
#include <string.h>

#define MAX 100

int id[MAX];
char book[MAX][50];
char author[MAX][50];
int quantity[MAX];
int count = 0;

// Add Book
void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &id[count]);

    printf("Enter Book Name: ");
    scanf("%s", book[count]);

    printf("Enter Author Name: ");
    scanf("%s", author[count]);

    printf("Enter Quantity: ");
    scanf("%d", &quantity[count]);

    count++;

    printf("\nBook Added Successfully!\n");
}

// Display Books
void displayBooks()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\nID\tBook\tAuthor\tQuantity\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%s\t%d\n",
               id[i], book[i], author[i], quantity[i]);
    }
}

// Search Book
void searchBook()
{
    int searchId, i;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &searchId);

    for(i = 0; i < count; i++)
    {
        if(id[i] == searchId)
        {
            printf("\nBook Found!\n");
            printf("ID       : %d\n", id[i]);
            printf("Book     : %s\n", book[i]);
            printf("Author   : %s\n", author[i]);
            printf("Quantity : %d\n", quantity[i]);
            return;
        }
    }

    printf("\nBook Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
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