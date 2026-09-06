// Program to check a year is a leap year or not
#include <stdio.h>

int main()
{
    int y;

    printf("Enter year: ");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))   // check for leap year
    {
        printf("%d is a leap year\n", y);
    }

    else   // if it is not a leap year
    {
        printf("%d is not a leap year\n", y);
    }

    return 0;
}
