#include <stdio.h>

int main()
{
    int secret = 25, guess;

    printf("===== NUMBER GUESSING GAME =====\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > secret)
            printf("Too High!\n");
        else if(guess < secret)
            printf("Too Low!\n");
        else
            printf("Congratulations! Correct Guess.\n");

    }while(guess != secret);

    return 0;
}