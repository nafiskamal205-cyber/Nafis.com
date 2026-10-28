// Program to calculate electricity bill
#include <stdio.h>
int main()
{
    int customerID;
    float units, totalBill;
    char customerName[50];

    printf("Customer Name: ");
    scanf("%s", customerName);

    printf("Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter number of units consumed: ");
    scanf("%f", &units);

    if (units <= 0) // units cannot be negative or zero
    {
        printf("Invalid units!\n");
    }
    else if(units <= 200)
    {
        totalBill = units * 1.20;
    }
    else if(units <= 400)
    {
        totalBill = (200 * 1.20) + ((units - 200) * 1.50); // Calculate bill for first 200 units and remaining units
    }
    else if(units <= 600)
    {
        totalBill = (200 * 1.20) + (200 * 1.50) + ((units - 400) * 1.80); // Calculate bill for first 400 units and remaining units
    }
    else
    {
        totalBill = (200 * 1.20) + (200 * 1.50) + (200 * 1.80) + ((units - 600) * 2.00); // Calculate bill for first 600 units and remaining units
    }

    if (units >= 0)
    {
     printf("\n");
     printf("Customer Name: %s\n", customerName);
     printf("Customer ID: %d\n", customerID);
     printf("Total bill: %.2f\n", totalBill);
    }
    return 0;
}
