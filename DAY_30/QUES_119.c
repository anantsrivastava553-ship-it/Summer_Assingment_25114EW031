// Write a program to Create mini employee 
// management system. 
#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    int count = 0;
    int id[100];
    char name[100][50];
    char department[100][50];
    float salary[100];
    int searchId, i;

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &id[count]);

                printf("Enter Employee Name: ");
                scanf("%s", name[count]);

                printf("Enter Department: ");
                scanf("%s", department[count]);

                printf("Enter Salary: ");
                scanf("%f", &salary[count]);

                count++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("\nNo Employee Records Found.\n");
                }
                else
                {
                    printf("\n----- Employee Records -----\n");
                    printf("ID\tName\tDepartment\tSalary\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("%d\t%s\t%s\t\t%.2f\n",
                               id[i], name[i], department[i], salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < count; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", id[i]);
                        printf("Name       : %s\n", name[i]);
                        printf("Department : %s\n", department[i]);
                        printf("Salary     : %.2f\n", salary[i]);
                        break;
                    }
                }

                if(i == count)
                    printf("Employee Not Found!\n");

                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}