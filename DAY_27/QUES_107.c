#include <stdio.h>
#include <string.h>

#define MAX 100

int id[MAX];
char name[MAX][50];
float basic[MAX], bonus[MAX], total[MAX];
int count = 0;

void addSalary()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &id[count]);

    printf("Enter Employee Name: ");
    scanf("%s", name[count]);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic[count]);

    printf("Enter Bonus: ");
    scanf("%f", &bonus[count]);

    total[count] = basic[count] + bonus[count];

    count++;

    printf("\nSalary Record Added Successfully!\n");
}

void displaySalary()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nID\tName\tBasic\tBonus\tTotal\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",
               id[i], name[i], basic[i], bonus[i], total[i]);
    }
}

void searchSalary()
{
    int searchId, i;

    printf("\nEnter Employee ID: ");
    scanf("%d", &searchId);

    for(i = 0; i < count; i++)
    {
        if(id[i] == searchId)
        {
            printf("\nRecord Found!\n");
            printf("ID : %d\n", id[i]);
            printf("Name : %s\n", name[i]);
            printf("Basic Salary : %.2f\n", basic[i]);
            printf("Bonus : %.2f\n", bonus[i]);
            printf("Total Salary : %.2f\n", total[i]);
            return;
        }
    }

    printf("\nRecord Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addSalary();
                break;

            case 2:
                displaySalary();
                break;

            case 3:
                searchSalary();
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