// Program to greet the user based on the time of day in 12-hour format (AM/PM)
#include <stdio.h>
#include <string.h>  // Include string.h for string comparison functions
#include <ctype.h>  // Include ctype.h for character handling functions

int main()
{
    int hour;
    char period[3];  // Array to hold AM/PM input

    printf("Enter time (Example: 4 AM or 8 PM): ");
    scanf("%d %2s", &hour, period);

    // Convert am/pm to uppercase
    period[0] = toupper(period[0]);   // Convert the first character to uppercase
    period[1] = toupper(period[1]);   // Convert the second character to uppercase

    if (strcmp(period, "AM") == 0)   // Check if the period is AM
    {
        if (hour == 12)

            printf("Good Night!\n");

        else if (hour >= 1 && hour <= 3)
            printf("Good Midnight!\n");

        else if (hour >= 4 && hour <= 5)
            printf("Good Early Morning!\n");

        else if (hour >= 6 && hour <= 11)
            printf("Good Morning!\n");

        else
            printf("Invalid Time!\n");
    }
    else if (strcmp(period, "PM") == 0)  // Check if the period is PM
    {
        if (hour == 12 || (hour >= 1 && hour <= 3))
            printf("Good Noon!\n");

        else if (hour >= 4 && hour <= 5)
            printf("Good Afternoon!\n");

        else if (hour >= 6 && hour <= 7)
            printf("Good Evening!\n");

        else if (hour >= 8 && hour <= 11)
            printf("Good Night!\n");

        else
            printf("Invalid Time!\n");
    }
    else
    {
        printf("Please enter AM or PM only.\n");
    }

    return 0;
}
