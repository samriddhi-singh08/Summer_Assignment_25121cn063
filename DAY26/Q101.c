#include <stdio.h>

int main()
{
    int secret = 7, guess;

    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);

    if(guess == secret)
        printf("Congratulations! You guessed correctly.\n");
    else
        printf("Wrong guess! The correct number is %d.\n", secret);

    return 0;
}