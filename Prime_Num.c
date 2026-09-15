// Program to check whether a number is prime

#include <stdio.h>

int main()
{
    int n, isPrime = 1;

    scanf("%d", &n);

    if (n < 2)
    {
        isPrime = 0;  // numbers less than 2 are not prime
    }
    else
    {
        for (int i = 2; i * i <= n; i++)  // check divisors up to square root of n
        {
            if (n % i == 0)
            {
                isPrime = 0;  // n is divisible by i, so it is not prime
                break;  // stop checking further
            }
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}
