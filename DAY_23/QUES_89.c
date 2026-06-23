 // Write a program to Find first non-repeating 
// character.
#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    
    for(i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Find first non-repeating character
    for(i = 0; str[i] != '\0'; i++) {
        if(count[str[i]] == 1) {
            printf("First non-repeating character = %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found");

    return 0;
} 
