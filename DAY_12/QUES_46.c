// Write a program to Write function for 
// Armstrong.
#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, ld, temp = n;

    while (n > 0)
    {
        ld = n % 10;
        sum = sum + ld * ld * ld;
        n = n / 10;
    }

    if (sum == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}