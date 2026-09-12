// Program to reverse the digits of a number

#include <stdio.h>

int main()
{
    int n, digit, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;  // get the last digit
        rev = rev * 10 + digit;  // add the digit to the reversed number
        n = n / 10;  // remove the last digit
    }

    printf("Reversed = %d\n", rev);

    return 0;
}
