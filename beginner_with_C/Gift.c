#include <stdio.h>

int main()
{
    char gift;

    printf("Happy Birthday to ME! 🎉\n\n");

    printf("Will you give me a birthday gift? (y/n): ");
    scanf(" %c", &gift);

    if(gift == 'y' || gift == 'Y')
    {
        printf("\nGood boy. 😎\n");
        printf("Now don't forget to buy it.\n");
    }
    else
    {
        printf("\nWrong answer! 😂\n");
        printf("You are my little brother.\n");
        printf("You have no choice.\n");
        printf("Go buy me a gift now! 🎁\n");
    }

    printf("\nEnd of program.\n");
    printf("Remember: Big brother is always right. 😎\n");

    return 0;
}
