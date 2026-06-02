// WAP TO PRINT FACTORS OF A NUMBER
#include <stdio.h>
int main()
{
    int num;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf("%d\n", i);
    }
    return 0;
}