// Program to find the factorial of a number

#include <stdio.h>

int main()
{
    int n;
    long long factorial = 1;
    printf("Enter input: ");
    scanf("%d", &n);  // take the number as input

    for (int i = 1; i <= n; i++)  // multiply numbers from 1 to n
    {
        factorial = factorial * i;  // calculate the factorial
    }

    printf("%d! = %lld", n, factorial);  // print the factorial

    return 0;
}
