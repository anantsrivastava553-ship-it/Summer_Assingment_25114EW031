// Write a program to Create menu-driven 
// string operations system.

#include <stdio.h>
#include <string.h>

char str1[100], str2[100];

void inputString()
{
    printf("Enter First String: ");
    scanf("%s", str1);

    printf("Enter Second String: ");
    scanf("%s", str2);
}

void displayString()
{
    printf("\nFirst String  : %s\n", str1);
    printf("Second String : %s\n", str2);
}

void stringLength()
{
    printf("Length of First String = %d\n", strlen(str1));
    printf("Length of Second String = %d\n", strlen(str2));
}

void stringCopy()
{
    char copy[100];

    strcpy(copy, str1);

    printf("Copied String = %s\n", copy);
}

void stringCompare()
{
    if(strcmp(str1, str2) == 0)
        printf("Both Strings are Equal.\n");
    else
        printf("Both Strings are Not Equal.\n");
}

void stringConcat()
{
    char temp[200];

    strcpy(temp, str1);
    strcat(temp, str2);

    printf("Concatenated String = %s\n", temp);
}

void stringReverse()
{
    int i, len;

    len = strlen(str1);

    printf("Reverse String = ");

    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }

    printf("\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== STRING OPERATIONS SYSTEM =====\n");
        printf("1. Input Strings\n");
        printf("2. Display Strings\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Compare Strings\n");
        printf("6. Concatenate Strings\n");
        printf("7. Reverse First String\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                inputString();
                break;

            case 2:
                displayString();
                break;

            case 3:
                stringLength();
                break;

            case 4:
                stringCopy();
                break;

            case 5:
                stringCompare();
                break;

            case 6:
                stringConcat();
                break;

            case 7:
                stringReverse();
                break;

            case 8:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}