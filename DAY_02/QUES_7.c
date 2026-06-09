// Write a program to Find product of digits.
#include <stdio.h>
int main()
{
    int i, num, prod = 1;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);
    int temp = num;
    for (int i = 1; temp > 0; i++)
    {
        int ld = temp % 10;
        prod = prod * ld;
        temp = temp / 10;
    }
    printf("PRODUCT OF DIGITS IN %d : %d", num, prod);
    return 0;
}