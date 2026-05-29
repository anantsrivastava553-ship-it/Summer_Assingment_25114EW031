// Write a program to Check whether a number is palindrome.
#include <stdio.h>
int main()
{
    int i, num, rev = 0;
    printf("ENTER THE NUMBER : ");100
    scanf("%d", &num);
    int temp = num;
    for (i = 1; temp > 0; i++)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    if (rev == num)
    {
        printf("%d is Palindrome number", num);
    }
    else
    {
        printf("%d is not a Palindrome number", num);
    }
    return 0;
}