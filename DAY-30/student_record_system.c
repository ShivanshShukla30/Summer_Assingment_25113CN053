#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, choice, roll, found = 0;

    char name[100][50];
    int rollNo[100];
    char className[100][20];
    float marks[100];

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter Roll Number: ");
        scanf("%d", &rollNo[i]);

        getchar();

        printf("Enter Class: ");
        fgets(className[i], sizeof(className[i]), stdin);
        className[i][strcspn(className[i], "\n")] = '\0';

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);

        getchar();
    }

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Display All Records\n");
        printf("2. Search by Roll Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Name : %s\n", name[i]);
                    printf("Roll : %d\n", rollNo[i]);
                    printf("Class: %s\n", className[i]);
                    printf("Marks: %.2f\n", marks[i]);
                }
                break;

            case 2:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);
                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(rollNo[i] == roll)
                    {
                        printf("\nRecord Found\n");
                        printf("Name : %s\n", name[i]);
                        printf("Roll : %d\n", rollNo[i]);
                        printf("Class: %s\n", className[i]);
                        printf("Marks: %.2f\n", marks[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Record not found.\n");

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