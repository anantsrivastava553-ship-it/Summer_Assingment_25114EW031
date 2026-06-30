#include <stdio.h>

int main()
{
    int age;

    printf("===== VOTING ELIGIBILITY SYSTEM =====\n");

    printf("Enter Age: ");
    scanf("%d",&age);

    if(age>=18)
        printf("Eligible for Voting.\n");
    else
        printf("Not Eligible for Voting.\n");

    return 0;
}