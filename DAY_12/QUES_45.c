// Write a program to Write function for 
// palindrome.
#include <stdio.h>

int palindrome(int n)
{
    int rev = 0, ld, temp = n; // ld = last digit

    while (n > 0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }

    if (temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}