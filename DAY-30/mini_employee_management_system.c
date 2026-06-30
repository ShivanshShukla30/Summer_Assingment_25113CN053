#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, choice, id, found;

    int empId[100];
    char name[100][50];
    char department[100][30];
    float salary[100];

    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar();

    
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);
        getchar();

        printf("Enter Employee Name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter Department: ");
        fgets(department[i], sizeof(department[i]), stdin);
        department[i][strcspn(department[i], "\n")] = '\0';

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
        getchar();
    }

    do
    {
        printf("\n----- EMPLOYEE MANAGEMENT SYSTEM -----\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEmployee Details\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID         : %d\n", empId[i]);
                    printf("Name       : %s\n", name[i]);
                    printf("Department : %s\n", department[i]);
                    printf("Salary     : %.2f\n", salary[i]);
                }
                break;

            case 2:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        printf("\nEmployee Found\n");
                        printf("ID         : %d\n", empId[i]);
                        printf("Name       : %s\n", name[i]);
                        printf("Department : %s\n", department[i]);
                        printf("Salary     : %.2f\n", salary[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found.\n");

                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}