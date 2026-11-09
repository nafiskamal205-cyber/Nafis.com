// This program shows time on 24-hour clock and gives a greeting based on the time of day.
#include <stdio.h>
int main()
{
    int hour;

    printf("Enter the hour (0-23): ");
    scanf("%d", &hour);

    if (hour >= 0 && hour < 12)  // Check if hour is in the morning
    {
        printf("Good Morning!\n");
    }
    else if (hour >= 12 && hour < 15)  // Check if hour is in the noon
    {
        printf("Good Noon!\n");
    }
    else if (hour >= 15 && hour < 18)  // Check if hour is in the afternoon
    {
        printf("Good Afternoon!\n");
    }
    else if (hour >= 18 && hour < 19)  // Check if hour is in the evening
    {
        printf("Good Evening!\n");
    }
    else if (hour >= 19 && hour <= 23)  // Check if hour is in the night
    {
        printf("Good Night!\n");
    }
    else
    {
        printf("Invalid hour!\n");  // Handle invalid input
    }

    return 0;
}
