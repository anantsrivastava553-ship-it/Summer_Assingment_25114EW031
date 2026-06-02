// Write a program to Check strong number.
#include <stdio.h>

int main()
{
    int num, fact = 1, ld, sum = 0;
    printf("Enter the number :  ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0)
    {
        ld = temp % 10;

        fact = 1;
        for (int j = 1; j <= ld; j++)
        {
            fact = fact * j;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is a strong number ", num);
    else
        printf("%d is not a strong number ", num);

    return 0;
}