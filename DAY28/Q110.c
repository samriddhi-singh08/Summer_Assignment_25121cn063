#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &a.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", a.name);

    a.balance = 0;

    do
    {
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Check Balance");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                a.balance += amount;
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= a.balance)
                    a.balance -= amount;
                else
                    printf("Insufficient Balance!\n");
                break;

            case 3:
                printf("Current Balance = %.2f\n", a.balance);
                break;
        }

    } while(choice != 4);

    return 0;
}