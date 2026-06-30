#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("\n----- Calculator Menu -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = a + b;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
            if(b != 0)
            {
                result = a / b;
                printf("Division = %.2f", result);
            }
            else
            {
                printf("Division by zero is not possible.");
            }
            break;

        case 5:
            printf("Modulus = %d", (int)a % (int)b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}