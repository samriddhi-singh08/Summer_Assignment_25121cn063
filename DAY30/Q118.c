#include <stdio.h>

struct Book
{
    int id;
    char title[50];
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Title: ");
        scanf("%s", b[i].title);
    }

    printf("\n--- Library Records ---\n");

    for(i = 0; i < n; i++)
    {
        printf("ID: %d\tTitle: %s\n", b[i].id, b[i].title);
    }

    return 0;
}