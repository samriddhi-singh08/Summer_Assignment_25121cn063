#include <stdio.h>

int isArmstrong(int num)
{
    int original = num, rem, sum = 0;

    while(num != 0)
    {
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }

    return (sum == original);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}