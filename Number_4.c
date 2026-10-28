// Program to calculate the sum of n numbers entered by the user
#include <stdio.h>
int main()
{
    int n, num;
    int sum = 0;

    printf("How many numbers do you want to enter?: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum += num;
    }

    printf("Sum of all numbers: %d\n", sum);

    return 0;
}
