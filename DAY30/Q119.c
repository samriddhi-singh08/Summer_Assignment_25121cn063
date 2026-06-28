#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n--- Employee Records ---\n");

    for(i = 0; i < n; i++)
    {
        printf("ID: %d\tName: %s\tSalary: %.2f\n",
               e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}