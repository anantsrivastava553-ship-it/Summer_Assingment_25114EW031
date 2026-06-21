// Write a program to Reverse a string

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    printf("Reversed string = ");

    for(i = length - 1; i >= 0; i--) // Looping from the last character to the first character of the string
    {
        printf("%c", str[i]);
    }

    return 0;
}