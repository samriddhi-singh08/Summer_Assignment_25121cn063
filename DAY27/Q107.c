#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary, hra, da, totalSalary;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basicSalary);

    e.hra = 0.20 * e.basicSalary;   // 20% HRA
    e.da = 0.10 * e.basicSalary;    // 10% DA
    e.totalSalary = e.basicSalary + e.hra + e.da;

    printf("\n--- Salary Details ---\n");
    printf("Employee ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Basic Salary: %.2f\n", e.basicSalary);
    printf("HRA: %.2f\n", e.hra);
    printf("DA: %.2f\n", e.da);
    printf("Total Salary: %.2f\n", e.totalSalary);

    return 0;
}