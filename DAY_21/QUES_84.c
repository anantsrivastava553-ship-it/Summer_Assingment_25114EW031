// Write a program to Convert lowercase to uppercase. 

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // ASCII value of 'a' is 97 and 'A' is 65, so subtracting 32 converts lowercase to uppercase  
        }
        i++;
    }

    printf("Uppercase string = %s", str);

    return 0;
}
