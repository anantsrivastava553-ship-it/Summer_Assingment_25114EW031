// Write a program to Find factorial of a number
#include <stdio.h>
int main()
{
    int fact = 1, num;
    printf("ENTER NUMBER WHOSE FACTORIAL IS TO BE FOUND \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("FACTORIAL OF %d is %d", num, fact);
    return 0;
}