// Write a program to Convert decimal to binary. 
#include <stdio.h>

int main()
{
    int num, binary = 0, position = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int remainder = num % 2;

        binary = binary + (remainder * position);

        position = position * 10;
        num = num / 2;
    }

    printf("Binary number = %d", binary);

    return 0;
}