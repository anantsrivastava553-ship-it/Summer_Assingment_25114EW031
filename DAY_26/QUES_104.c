#include <stdio.h>

int main()
{
    int ans;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    printf("\nQ1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d",&ans);

    if(ans==2)
        score++;

    printf("\nQ2. 5 + 7 = ?\n");
    printf("1. 10\n2. 11\n3. 12\n4. 13\n");
    scanf("%d",&ans);

    if(ans==3)
        score++;

    printf("\nQ3. C language developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("\nYour Score = %d/3\n",score);

    if(score==3)
        printf("Excellent!\n");
    else if(score==2)
        printf("Good!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}