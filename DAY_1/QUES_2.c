// Write a program to Print multiplication table of a given number.

#include <stdio.h>
int main()
{
    int num, table;
    printf("Enter the number whose table is to be found \n");
    scanf("%d", &num);
    printf("Table of %d : \n", num);
    for (int i = num; i <= num * 10; i += num)
    {
        printf("%d x %d = %d\n", num, i / num, i); // VERY IMPORTANT STEP FOR  PRINTING
    }
    return 0;
}