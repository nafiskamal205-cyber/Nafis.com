// Program to demonstrate bitwise operators in C
#include <stdio.h>
int main()
{
    int a = 32;
    int b = 12;
    int c;

    c = a & b; // Bitwise AND
    printf("a&b = %d\n", c);

    c = a | b; // Bitwise OR
    printf("a|b = %d\n", c);

    c = a ^ b; // Bitwise XOR
    printf("a^b = %d\n", c);

    return 0;
}
