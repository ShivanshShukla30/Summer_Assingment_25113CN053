#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    float amount;
    int choice;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    printf("\n1. Deposit");
    printf("\n2. Withdraw");
    printf("\n3. Display Account");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            b.balance = b.balance + amount;
            printf("Amount Deposited Successfully.\n");
            break;

        case 2:
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(amount <= b.balance)
            {
                b.balance = b.balance - amount;
                printf("Amount Withdrawn Successfully.\n");
            }
            else
            {
                printf("Insufficient Balance.\n");
            }
            break;

        case 3:
            break;

        default:
            printf("Invalid Choice.\n");
    }

    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", b.accNo);
    printf("Account Holder : %s\n", b.name);
    printf("Balance        : %.2f\n", b.balance);

    return 0;
}