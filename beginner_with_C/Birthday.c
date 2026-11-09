#include <stdio.h>
int main()
{
    char option;

    printf("\033[1m");
         printf("Happy Birthday \n");
    printf("\033[0m");

    printf("Do you want to treat me?\n");

    printf("Enter your opinion (yes/no): ");
    scanf(" %c", &option);

    if(option == 'y' || option == 'Y')  // Check if the user input is 'y' or 'Y'
    {
        printf("Thank you for treating me\n");
        printf("Send me the value of treat to my IFIC account\n");
    }
    else if(option == 'n' || option == 'N')  // Check if the user input is 'n' or 'N'
    {
        printf("You must treat me\n");
    }
    else
    {
        printf("You have to treat me\n");
    }


     return 0;
}
