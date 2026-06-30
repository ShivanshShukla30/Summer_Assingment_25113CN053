#include <stdio.h>

struct book
{
    int id;
    char name[50];
    char author[50];
    float price;
};

int main()
{
    struct book b;

    printf("Enter book ID: ");
    scanf("%d", &b.id);

    printf("Enter book Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Author name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\n----- Book Details -----\n");
    printf("book ID : %d\n", b.id);
    printf("book Name : %s\n", b.name);
    printf("Author name : %s\n", b.author);
    printf("Price : %.2f\n", b.price);
    

    return 0;
}