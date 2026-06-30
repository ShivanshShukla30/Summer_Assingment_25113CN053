#include <stdio.h>
#include <string.h>

int id[100];
char name[100][50];
char dept[100][30];
float salary[100];
int n = 0;

void addEmployee();
void displayEmployee();
void searchEmployee();
void updateEmployee();
void deleteEmployee();

int main()
{
    int choice;

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            addEmployee();
            break;

        case 2:
            displayEmployee();
            break;

        case 3:
            searchEmployee();
            break;

        case 4:
            updateEmployee();
            break;

        case 5:
            deleteEmployee();
            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}

void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &id[n]);
    getchar();

    printf("Enter Employee Name: ");
    fgets(name[n], 50, stdin);
    name[n][strcspn(name[n], "\n")] = '\0';

    printf("Enter Department: ");
    fgets(dept[n], 30, stdin);
    dept[n][strcspn(dept[n], "\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &salary[n]);

    n++;

    printf("Employee Added Successfully.\n");
}

void displayEmployee()
{
    int i;

    if (n == 0)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\nEmployee Records\n");

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID : %d\n", id[i]);
        printf("Name : %s\n", name[i]);
        printf("Department : %s\n", dept[i]);
        printf("Salary : %.2f\n", salary[i]);
    }
}
void searchEmployee()
{
    int i, searchId, found = 0;

    printf("Enter Employee ID to Search: ");
    scanf("%d", &searchId);

    for (i = 0; i < n; i++)
    {
        if (id[i] == searchId)
        {
            printf("\nEmployee Found\n");
            printf("ID : %d\n", id[i]);
            printf("Name : %s\n", name[i]);
            printf("Department : %s\n", dept[i]);
            printf("Salary : %.2f\n", salary[i]);

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Employee Not Found.\n");
}

void updateEmployee()
{
    int i, searchId, found = 0;

    printf("Enter Employee ID to Update: ");
    scanf("%d", &searchId);

    for (i = 0; i < n; i++)
    {
        if (id[i] == searchId)
        {
            printf("Enter New Salary: ");
            scanf("%f", &salary[i]);

            printf("Salary Updated Successfully.\n");
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Employee Not Found.\n");
}

void deleteEmployee()
{
    int i, j, searchId, found = 0;

    printf("Enter Employee ID to Delete: ");
    scanf("%d", &searchId);

    for (i = 0; i < n; i++)
    {
        if (id[i] == searchId)
        {
            for (j = i; j < n - 1; j++)
            {
                id[j] = id[j + 1];
                strcpy(name[j], name[j + 1]);
                strcpy(dept[j], dept[j + 1]);
                salary[j] = salary[j + 1];
            }

            n--;
            found = 1;
            printf("Employee Deleted Successfully.\n");
            break;
        }
    }

    if (found == 0)
        printf("Employee Not Found.\n");
}