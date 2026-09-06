// Program to find the missing number in an array of size n-1 containing numbers from 1 to n
#include <stdio.h>

int main()
{
    int n;
    int num;
    int sum = 0;

    scanf("%d", &n);

    // Sum of numbers from 1 to n
    int expectedSum = n * (n + 1) / 2;

    // Read n-1 numbers
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    int missing = expectedSum - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}
