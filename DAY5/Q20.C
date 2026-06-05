#include <stdio.h>

int main()
{
    int num, i, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        while(num % i == 0) 
        {
            largest = i;
            num /= i;
        }
    }

    printf("Largest Prime Factor = %d\n", largest);

    return 0;
}