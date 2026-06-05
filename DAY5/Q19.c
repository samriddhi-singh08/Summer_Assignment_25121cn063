#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime Factors: ");

    for(i = 2; i <= num; i++) 
    {
        while(num % i == 0) 
        {
            printf("%d ", i);
            num /= i;
        }
    }

    return 0;
}