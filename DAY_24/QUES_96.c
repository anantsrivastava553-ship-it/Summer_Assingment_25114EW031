// Write a program to Remove duplicate characters.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                strcpy(&str[j], &str[j + 1]);
                j--;
            }
        }
    }

    printf("String after removing duplicates: %s", str);

    return 0;
}

