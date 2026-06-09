// Write a program to Find LCM of two numbers.

#include <stdio.h>
int main()
{
    int num_1, num_2, gcd = 1, lcm;
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
    lcm = (num_1 * num_2) / gcd;  //  TO CALCULATE LCM

    printf("LCM = %d", lcm);
    return 0;
}
