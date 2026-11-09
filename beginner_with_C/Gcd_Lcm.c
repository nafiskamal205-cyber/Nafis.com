// Program to find the GCD and LCM of two numbers
#include <stdio.h>

int main()
{
    int a, b, originalA, originalB, t, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    originalA = a;
    originalB = b;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    gcd = a;  // a contains the GCD after the loop

    lcm = (originalA / gcd) * originalB;  // calculate LCM

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
