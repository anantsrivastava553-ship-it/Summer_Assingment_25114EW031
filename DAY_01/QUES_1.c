// Write a program to Calculate sum of first N natural numbers

#include <stdio.h>
int main()
{
    int sum = 0, N, i;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&N);
    for (i = 1; i <= N; i++)
    {

        sum = sum + i;
    }
    printf("SUM OF FIRST %d numbers is %d ",N,sum);
    return 0;
}
