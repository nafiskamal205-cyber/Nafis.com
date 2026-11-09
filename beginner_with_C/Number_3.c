#include <stdio.h>
int main()
{
    int n;
    int number;
    int highest;
    int position;

    printf("How many numbers do you want to enters?:");
    scanf("%d", &n);

    printf("Enter number 1:");
    scanf("%d", &highest);

    position = 1;

    for(int i = 2; i <= n; i++)
    {
        printf("Enter number %d:", i);
        scanf("%d", &number);

        if(number > highest)
        {
            highest = number;
            position = i;
        }
    }
    printf("\n");

    printf("Highest value %d\n", highest);
    printf("Input position %d\n", position);

    return 0;
}
