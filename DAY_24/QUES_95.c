// Write a program to Find longest word.
#include <stdio.h>
#include <string.h>

int main() {
    char word[50], longest[50];
    int n, i;

    printf("How many words? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s", word);

        if(i == 0 || strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
    }

    printf("Longest word = %s", longest);

    return 0;
}