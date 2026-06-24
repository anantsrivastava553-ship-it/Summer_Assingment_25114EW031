// Write a program to Check string rotation.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strlen(str1) == strlen(str2) && strstr(temp, str2))
        printf("String is rotated.\n");
    else
        printf("String is not rotated.\n");

    return 0;
}