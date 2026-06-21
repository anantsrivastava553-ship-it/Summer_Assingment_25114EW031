// Write a program to Find string length without strlen().

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0') // ASCII value of null character is 0 so loop ends when it reaches the null character
    {
        i++;
    }

    printf("Length of string = %d", i);

    return 0;
}
