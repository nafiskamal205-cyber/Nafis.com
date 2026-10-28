// Program to calculate electricity bill
#include <stdio.h>
int main()
{
    int customerID;
    float units, bill;
    char customerName[50];

    printf("Enter customer Name: ");
    scanf("%s", customerName);

    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter number of units consumed: ");
    scanf("%f", &units);

    if (units <= 0) // units cannot be negative or zero
    {
        printf("Invalid units!\n");
    }
    else if(units <= 200)
    {
        bill = units * 1.20;
    }
    else if(units <= 400)
    {
        bill = units * 1.50;
    }
    else if(units <= 600)
    {
        bill = units * 1.80;
    }
    else
    {
        bill = units * 2.00;
    }

    if(units >= 0)
    {
     printf("\n");
     printf("Customer Name: %s\n", customerName);
     printf("Customer ID: %d\n", customerID);
     printf("Total bill: %.2f\n", bill);
    }

    return 0;

}
