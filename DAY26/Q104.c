#include <stdio.h>

int main()
{
    int score = 0, ans;

    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Q2. 2 + 3 = ?\n");
    printf("1. 4\n2. 5\n3. 6\n4. 7\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Q3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}