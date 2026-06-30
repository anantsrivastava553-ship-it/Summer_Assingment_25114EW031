// Write a program to Create menu-driven 
// calculator. 
#include <stdio.h>

// Function declarations
void add();
void subtract();
void multiply();
void divide();

int main()
{
    int choice;

    do
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                subtract();
                break;

            case 3:
                multiply();
                break;

            case 4:
                divide();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Function for Addition
void add()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Result = %.2f\n", a + b);
}

// Function for Subtraction
void subtract()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Result = %.2f\n", a - b);
}

// Function for Multiplication
void multiply()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Result = %.2f\n", a * b);
}

// Function for Division
void divide()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(b == 0)
        printf("Division by zero is not possible.\n");
    else
        printf("Result = %.2f\n", a / b);
}