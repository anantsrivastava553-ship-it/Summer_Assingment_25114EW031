// Write a program to Reverse a number.

#include <stdio.h>
int main()
{
    int i, num, rev = 0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    int temp = num;
    for (i = 1; temp > 0; i++)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    printf("REVERSE OF %d is : %d ",num,rev);
    return 0;
}