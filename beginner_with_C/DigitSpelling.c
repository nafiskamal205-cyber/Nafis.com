#include <stdio.h>
int main()
{
    int digit;
    printf("Enter a digit: ");
    scanf("%d",&digit);

    switch(digit)
    {
        case 0:
            printf("You Entered: Zero\n");
            break;
        case 1:
            printf("You Entered: One\n");
            break;
        case 2:
            printf("You Entered: Two\n");
            break;
        case 3:
            printf("You Entered: Three\n");
            break;
        case 4:
            printf("You Entered: Four\n");
            break;
        case 5:
            printf("You Entered: Five\n");
            break;
        case 6:
            printf("You Entered: Six\n");
            break;
        case 7:
            printf("You Entered: Seven\n");
            break;
        case 8:
            printf("You Entered: Eight\n");
            break;
        case 9:
            printf("You Entered: Nine\n");
            break;
        default:
            printf("Invalid input! Please enter a single digit (0-9).\n");
    }
}

