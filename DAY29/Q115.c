#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n1. Length");
        printf("\n2. Reverse");
        printf("\n3. Uppercase");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
            {
                int i;
                for(i = strlen(str) - 1; i >= 0; i--)
                    printf("%c", str[i]);
                printf("\n");
                break;
            }

            case 3:
            {
                int i;
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= 32;
                }
                printf("Uppercase: %s\n", str);
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;
        }

    } while(choice != 4);

    return 0;
}