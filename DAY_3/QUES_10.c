// Write a program to Print prime numbers in a range

#include <stdio.h>
int main()
{
    int l1, l2, count = 0; // l1 and l2 are lower and upper limits
    printf("ENTER LOWER LIMIT :  ");
    scanf("%d", &l1);
    printf("ENTER UPPER LIMIT :  ");
    scanf("%d", &l2);
    for (int i = l1; i <= l2; i++) // this loop is for range of numbers to be checked
    {
        for (int j = 1; j <= i; j++) // this inner loop is for checking each number that divides i
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
        count = 0;
    }
    return 0;
}