#include <stdio.h>
#include <string.h>

#define MAX 100

int id[MAX];
char name[MAX][50];
char department[MAX][50];
float salary[MAX];
int count = 0;

void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &id[count]);

    printf("Enter Employee Name: ");
    scanf("%s", name[count]);

    printf("Enter Department: ");
    scanf("%s", department[count]);

    printf("Enter Salary: ");
    scanf("%f", &salary[count]);

    count++;
    printf("\nEmployee Added Successfully!\n");
}

void displayEmployees()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nID\tName\tDepartment\tSalary\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%s\t\t%.2f\n",
               id[i], name[i], department[i], salary[i]);
    }
}

void searchEmployee()
{
    int searchId, i;

    printf("\nEnter Employee ID: ");
    scanf("%d", &searchId);

    for(i = 0; i < count; i++)
    {
        if(id[i] == searchId)
        {
            printf("\nEmployee Found!\n");
            printf("ID : %d\n", id[i]);
            printf("Name : %s\n", name[i]);
            printf("Department : %s\n", department[i]);
            printf("Salary : %.2f\n", salary[i]);
            return;
        }
    }

    printf("\nEmployee Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
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