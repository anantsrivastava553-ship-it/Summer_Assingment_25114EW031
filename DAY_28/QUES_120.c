#include <stdio.h>
#include <string.h>

#define MAX 100

int accNo[MAX];
char name[MAX][50];
float balance[MAX];
int count = 0;

// Create Account
void createAccount()
{
    printf("\nEnter Account Number: ");
    scanf("%d", &accNo[count]);

    printf("Enter Account Holder Name: ");
    scanf("%s", name[count]);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance[count]);

    count++;

    printf("\nAccount Created Successfully!\n");
}

// Display Accounts
void displayAccounts()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Accounts Available!\n");
        return;
    }

    printf("\nAcc No\tName\tBalance\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%s\t%.2f\n",
               accNo[i], name[i], balance[i]);
    }
}

// Deposit Money
void deposit()
{
    int number, i;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &number);

    for(i = 0; i < count; i++)
    {
        if(accNo[i] == number)
        {
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            balance[i] += amount;

            printf("Amount Deposited Successfully!\n");
            printf("Current Balance = %.2f\n", balance[i]);
            return;
        }
    }

    printf("Account Not Found!\n");
}

// Withdraw Money
void withdraw()
{
    int number, i;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &number);

    for(i = 0; i < count; i++)
    {
        if(accNo[i] == number)
        {
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(amount > balance[i])
            {
                printf("Insufficient Balance!\n");
            }
            else
            {
                balance[i] -= amount;
                printf("Withdrawal Successful!\n");
                printf("Current Balance = %.2f\n", balance[i]);
            }
            return;
        }
    }

    printf("Account Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                deposit();
                break;

            case 4:
                withdraw();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}