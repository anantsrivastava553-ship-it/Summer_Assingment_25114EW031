// Write a program to Find GCD of two numbers.

#include <stdio.h>
int main()
{
    int num_1, num_2, gcd = 1;
    printf("ENTER FIRST NUMBER :  ");
    scanf("%d", &num_1);
    printf("ENTER SECOND NUMBER :  ");
    scanf("%d", &num_2);
    for (int i = 1; i <= num_1 && i <= num_2; i++)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD = %d", gcd);
    return 0;
}
