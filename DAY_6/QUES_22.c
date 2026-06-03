// Write a program to Convert binary to decimal.
#include <stdio.h>

int main()
{
    int binary, decimal = 0, position = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        int digit = binary % 10;

        decimal = decimal + (digit * position);

        position = position * 2;
        binary = binary / 10;
    }

    printf("Decimal number = %d", decimal);

    return 0;
}