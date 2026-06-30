#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float m1[MAX], m2[MAX], m3[MAX], m4[MAX], m5[MAX];
float total[MAX], percentage[MAX];
char grade[MAX];
int count = 0;

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks of 5 Subjects: ");
    scanf("%f %f %f %f %f",
          &m1[count], &m2[count], &m3[count], &m4[count], &m5[count]);

    total[count] = m1[count] + m2[count] + m3[count] + m4[count] + m5[count];
    percentage[count] = total[count] / 5.0;

    if(percentage[count] >= 90)
        grade[count] = 'A';
    else if(percentage[count] >= 75)
        grade[count] = 'B';
    else if(percentage[count] >= 60)
        grade[count] = 'C';
    else if(percentage[count] >= 40)
        grade[count] = 'D';
    else
        grade[count] = 'F';

    count++;

    printf("\nMarksheet Generated Successfully!\n");
}

void displayMarksheet()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nRoll\tName\tTotal\tPercentage\tGrade\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t\t%c\n",
               roll[i], name[i], total[i], percentage[i], grade[i]);
    }
}

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
            printf("Roll Number : %d\n", roll[i]);
            printf("Name : %s\n", name[i]);
            printf("Total : %.2f\n", total[i]);
            printf("Percentage : %.2f\n", percentage[i]);
            printf("Grade : %c\n", grade[i]);
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
        printf("\n===== MARKSHEET GENERATION SYSTEM =====\n");
        printf("1. Add Student Marks\n");
        printf("2. Display Marksheet\n");
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
                displayMarksheet();
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