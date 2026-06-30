#include <stdio.h>

int main()
{
    int a[100], n, i, choice;
    int sum = 0, largest, smallest;

    printf("Enter Size of Array: ");
    scanf("%d", &n);

    printf("Enter Array Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n----- Array Menu -----\n");
    printf("1. Display Array\n");
    printf("2. Sum of Elements\n");
    printf("3. Largest Element\n");
    printf("4. Smallest Element\n");
    printf("5. Exit\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;

        case 2:
            for(i = 0; i < n; i++)
            {
                sum += a[i];
            }
            printf("Sum = %d", sum);
            break;

        case 3:
            largest = a[0];
            for(i = 1; i < n; i++)
            {
                if(a[i] > largest)
                    largest = a[i];
            }
            printf("Largest Element = %d", largest);
            break;

        case 4:
            smallest = a[0];
            for(i = 1; i < n; i++)
            {
                if(a[i] < smallest)
                    smallest = a[i];
            }
            printf("Smallest Element = %d", smallest);
            break;

        case 5:
            printf("Program Ended.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}