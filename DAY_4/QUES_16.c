// Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>

int main()
{
    int L1, L2;

    printf("ENTER STARTING LIMIT : ");
    scanf("%d", &L1);

    printf("ENTER ENDING LIMIT : ");
    scanf("%d", &L2);

    for (int i = L1; i <= L2; i++)
    {
        int sum = 0, count = 0;
        for (int j = i; j > 0; j = j / 10)
        {
            count++;
        }

        for (int k = i; k > 0; k = k / 10)
        {
            int ld = k % 10;
            sum = sum + (int)(pow(ld, count)+0.5);
        }
       
        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}