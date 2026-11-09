// Program to calculate the sum of harmonic series
#include <stdio.h>
int main()
{
    int n;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }

    printf("Sum of harmonic series = %.2f\n", sum);

    return 0;
}
