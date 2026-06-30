#include <stdio.h>
#include <string.h>

#define MAX 100

int ticketNo[MAX];
char name[MAX][50];
char destination[MAX][50];
int count = 0;

void bookTicket()
{
    printf("\nEnter Ticket Number: ");
    scanf("%d",&ticketNo[count]);

    printf("Enter Passenger Name: ");
    scanf("%s",name[count]);

    printf("Enter Destination: ");
    scanf("%s",destination[count]);

    count++;
    printf("\nTicket Booked Successfully!\n");
}

void displayTickets()
{
    int i;

    if(count==0)
    {
        printf("\nNo Booking Found!\n");
        return;
    }

    printf("\nTicketNo\tName\tDestination\n");

    for(i=0;i<count;i++)
    {
        printf("%d\t\t%s\t%s\n",ticketNo[i],name[i],destination[i]);
    }
}

void searchTicket()
{
    int num,i;

    printf("\nEnter Ticket Number: ");
    scanf("%d",&num);

    for(i=0;i<count;i++)
    {
        if(ticketNo[i]==num)
        {
            printf("\nBooking Found\n");
            printf("Ticket No : %d\n",ticketNo[i]);
            printf("Name      : %s\n",name[i]);
            printf("Destination : %s\n",destination[i]);
            return;
        }
    }

    printf("Booking Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1.Book Ticket\n");
        printf("2.Display Tickets\n");
        printf("3.Search Ticket\n");
        printf("4.Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: bookTicket(); break;
            case 2: displayTickets(); break;
            case 3: searchTicket(); break;
            case 4: printf("Thank You!\n"); break;
            default: printf("Invalid Choice!\n");
        }

    }while(choice!=4);

    return 0;
}