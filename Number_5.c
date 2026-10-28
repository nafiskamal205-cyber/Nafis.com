// Program to calculate the sum of first n odd natural numbers
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Odd natural numbers: \n");

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i - 1);

        sum = sum + (2 * i - 1);
    }

    printf("\n");
    printf("Sum = %d\n", sum);

    return 0;
}
