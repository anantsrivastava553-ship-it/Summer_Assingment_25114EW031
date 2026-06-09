// WAP TO PRINT LARGEST PRIME FACTOR 
#include <stdio.h>

int main()
{
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &num);

    int largestPrime = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) // i is a factor
        {
            int count = 0;

            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }

            if (count == 2) // i is prime
            {
                largestPrime = i;
            }
        }
    }

    printf("LARGEST PRIME FACTOR = %d", largestPrime);

    return 0;
}