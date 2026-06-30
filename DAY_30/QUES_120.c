// Write a program to Develop complete mini 
// project using arrays, strings and functions. 


#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;

// Function to add student
void addStudent()
{
    printf("\nEnter Roll No: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;
    printf("\nStudent Added Successfully!\n");
}

// Function to display students
void displayStudents()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent()
{
    int r, i;

    printf("\nEnter Roll Number: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++)
    {
        if(roll[i] == r)
        {
            printf("\nStudent Found!\n");
            printf("Roll : %d\n", roll[i]);
            printf("Name : %s\n", name[i]);
            printf("Marks: %.2f\n", marks[i]);
            return;
        }
    }

    printf("\nStudent Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
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