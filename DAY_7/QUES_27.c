// Write a program to Recursive sum of digits. 
#include<stdio.h>

int sum(int num)
{
    if(num==0)
    {
        return 0;
    }

    return num%10 + sum(num/10);
}

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Sum of digits = %d",sum(num));

    return 0;
}