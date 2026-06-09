// Write a program to Check perfect number.
#include <stdio.h>

    int main()
    {
        int num, sum = 0;
        printf("Enter the number :  ");
        scanf("%d", &num);
        int temp = num;
        for (int i = 1; i < num; i++)
        {
            if (temp % i == 0)
                sum = sum + i;
        }
        if (sum == num)
            printf("%d is a perfect number ", num) ;
            else
             printf("%d is not a perfect number ", num);
    
    return 0;
}