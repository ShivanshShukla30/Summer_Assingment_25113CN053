#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int tickets;
    float price;
    float total;
};

int main()
{
    struct Ticket t;

    printf("Enter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Destination: ");
    scanf(" %[^\n]", t.destination);

    printf("Enter Number of Tickets: ");
    scanf("%d", &t.tickets);

    printf("Enter Price per Ticket: ");
    scanf("%f", &t.price);

    t.total = t.tickets * t.price;

    printf("\n----- Ticket Details -----\n");
    printf("Ticket Number      : %d\n", t.ticketNo);
    printf("Passenger Name     : %s\n", t.name);
    printf("Destination        : %s\n", t.destination);
    printf("Number of Tickets  : %d\n", t.tickets);
    printf("Price per Ticket   : %.2f\n", t.price);
    printf("Total Amount       : %.2f\n", t.total);

    return 0;
}