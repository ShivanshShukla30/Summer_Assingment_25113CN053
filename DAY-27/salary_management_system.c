#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    printf("Enter HRA: ");
    scanf("%f", &e.hra);

    printf("Enter DA: ");
    scanf("%f", &e.da);

    e.gross = e.basic + e.hra + e.da;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID : %d\n", e.id);
    printf("Employee Name : %s\n", e.name);
    printf("Basic Salary : %.2f\n", e.basic);
    printf("HRA : %.2f\n", e.hra);
    printf("DA : %.2f\n", e.da);
    printf("Gross Salary : %.2f\n", e.gross);

    return 0;
}