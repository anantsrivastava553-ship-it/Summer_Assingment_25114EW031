// Write a program to Create mini library 
// system. 

#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    int count = 0;
    char book[100][50];
    char author[100][50];
    int id[100];
    int i;
    char search[50];

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &id[count]);

                printf("Enter Book Name: ");
                scanf("%s", book[count]);

                printf("Enter Author Name: ");
                scanf("%s", author[count]);

                count++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("\nNo Books Available.\n");
                }
                else
                {
                    printf("\n----- Library Books -----\n");
                    printf("ID\tBook\tAuthor\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("%d\t%s\t%s\n", id[i], book[i], author[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Book Name to Search: ");
                scanf("%s", search);

                for(i = 0; i < count; i++)
                {
                    if(strcmp(book[i], search) == 0)
                    {
                        printf("\nBook Found!\n");
                        printf("ID : %d\n", id[i]);
                        printf("Book : %s\n", book[i]);
                        printf("Author : %s\n", author[i]);
                        break;
                    }
                }

                if(i == count)
                    printf("Book Not Found!\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}