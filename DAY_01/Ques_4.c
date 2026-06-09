// Write a program to Count digits in a number.
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("ENTER THE NUMBER WHOSE DIGIT IS TO BE COUNTED \n");
    scanf("%d",&num);
    int temp=num;
    for (int i = 1; temp>0 ; i++)
    {
        temp = temp / 10;
        count++;
    }
    printf("NUMBER OF DIGITS IN %d is %d", num, count);
    return 0;
}
