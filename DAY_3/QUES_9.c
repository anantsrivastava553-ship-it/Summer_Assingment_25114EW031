// Write a program to Check whether a number is prime.
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("%d IS NOT PRIME NUMBER", num);
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d IS A PRIME NUMBER", num);
        }
        else
            printf("%d IS NOT PRIME NUMBER", num);
    }
    return 0;
}
