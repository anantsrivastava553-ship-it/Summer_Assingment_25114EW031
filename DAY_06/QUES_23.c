// Write a program to Count set bits in a number.
#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int remainder = num % 2;

        if (remainder == 1)
        {
            count++;
        }

        num = num / 2;
    }

    printf("Number of set bits = %d", count);

    return 0;
}