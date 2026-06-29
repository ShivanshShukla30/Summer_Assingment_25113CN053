#include <stdio.h>

int main()
{
    int choice, amount = 10000, deposited_amount, withdrawl_amount;
    printf("=== ATM MENU ===\n");
    printf("1.Check Balance\n2.Deposite Money\n3.Withdraw Money\n4.Exit\n");
    printf("Enter choice :");
    scanf("%d", &choice);
   
    do
    {   switch (choice)
        {
        case 1:
            printf("₹%d\n", amount);
            break;
        case 2:
            printf("Enter amount you want to deposite :");
            scanf("%d", &deposited_amount);
            printf("₹%d get deposited\n", deposited_amount);
            amount += deposited_amount;
            break;
        case 3:
            printf("Enter amount you want to withdraw :");
            scanf("%d", &withdrawl_amount);
            printf("₹%d get withdrawled\n", withdrawl_amount);
            amount -= withdrawl_amount;
            break;
        case 4:
            printf("Thanks for visiting!\n");
            return 0;
        default:
            printf("Enter valid");
        }
        printf("Enter choice :");
        scanf("%d", &choice);
    } while (choice < 5);

    return 0;
}