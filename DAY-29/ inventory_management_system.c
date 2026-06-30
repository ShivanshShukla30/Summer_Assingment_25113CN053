#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
    float total;
};

int main()
{
    struct Product p;

    printf("Enter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price per Unit: ");
    scanf("%f", &p.price);

    p.total = p.quantity * p.price;

    printf("\n----- Inventory Details -----\n");
    printf("Product ID      : %d\n", p.id);
    printf("Product Name    : %s\n", p.name);
    printf("Quantity        : %d\n", p.quantity);
    printf("Price per Unit  : %.2f\n", p.price);
    printf("Total Value     : %.2f\n", p.total);

    return 0;
}