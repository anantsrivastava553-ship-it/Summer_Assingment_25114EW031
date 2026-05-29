// Write a program to Find sum of digits of a number.

#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("ENTER THE NUMBER :  ");
    scanf("%d", &num);
    int temp = num, ld; // ld stands for last digit
    for (i = 1; temp > 0; i++)
    {
        ld = temp % 10;
        sum = sum + ld;
        temp = temp / 10;
    }
    printf("SUM OF DIGITS IN %d : %d", num, sum);
    return 0;
}
