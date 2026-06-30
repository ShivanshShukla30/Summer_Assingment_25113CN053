#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, choice, found;
    char title[100][50];
    char author[100][50];
    int bookId[100];
    char search[50];

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);
        getchar();

        printf("Enter Book Title: ");
        fgets(title[i], sizeof(title[i]), stdin);
        title[i][strcspn(title[i], "\n")] = '\0';

        printf("Enter Author Name: ");
        fgets(author[i], sizeof(author[i]), stdin);
        author[i][strcspn(author[i], "\n")] = '\0';
    }

    do
    {
        printf("\n----- MINI LIBRARY SYSTEM -----\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by Title\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("\nLibrary Books\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("Book ID : %d\n", bookId[i]);
                    printf("Title   : %s\n", title[i]);
                    printf("Author  : %s\n", author[i]);
                }
                break;

            case 2:
                printf("Enter Book Title: ");
                fgets(search, sizeof(search), stdin);
                search[strcspn(search, "\n")] = '\0';

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(title[i], search) == 0)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

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