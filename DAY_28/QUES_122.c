#include <stdio.h>
#include <string.h>

#define MAX 100

char name[MAX][50];
char phone[MAX][15];
int count=0;

void addContact()
{
    printf("\nEnter Name: ");
    scanf("%s",name[count]);

    printf("Enter Phone Number: ");
    scanf("%s",phone[count]);

    count++;

    printf("\nContact Added Successfully!\n");
}

void displayContacts()
{
    int i;

    if(count==0)
    {
        printf("\nNo Contacts Available!\n");
        return;
    }

    printf("\nName\tPhone Number\n");

    for(i=0;i<count;i++)
    {
        printf("%s\t%s\n",name[i],phone[i]);
    }
}

void searchContact()
{
    char search[50];
    int i;

    printf("\nEnter Name: ");
    scanf("%s",search);

    for(i=0;i<count;i++)
    {
        if(strcmp(name[i],search)==0)
        {
            printf("\nContact Found\n");
            printf("Name  : %s\n",name[i]);
            printf("Phone : %s\n",phone[i]);
            return;
        }
    }

    printf("Contact Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1.Add Contact\n");
        printf("2.Display Contacts\n");
        printf("3.Search Contact\n");
        printf("4.Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: printf("Thank You!\n"); break;
            default: printf("Invalid Choice!\n");
        }

    }while(choice!=4);

    return 0;
}