// Write a program to Check Armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0,count = 0;
    printf("ENTER A NUMBER : ");
    scanf("%d", &num);
    int temp_1 = num;
    for(int i = 0; temp_1 > 0 ;i++){
        temp_1 = temp_1 /10;
        count++ ;
    }
    int temp_2 = num;
    for (int j = 0; temp_2 > 0; j++)
    {
        int ld = temp_2 % 10; // ld is last digit
        sum = sum +(int) (pow(ld,count)+0.5);
        temp_2 = temp_2 / 10;
    }
    
    if (sum == num)
        printf("%d is a Armstrong number", num);
    else
        printf("%d is not a Armstrong number", num);
    return 0;
}