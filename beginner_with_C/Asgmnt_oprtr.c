// Program to demonstrate the use of assignment operators in C
#include <stdio.h>
int main()
{
    int a = 5;
    a += 2;  // a=a+2
    printf("a1 = %d\n", a);

    a -= 2;  // a=a-2
    printf("a2 = %d\n", a);

    a *= 2;  // a=a*2
    printf("a3 = %d\n", a);

    a /= 2;  // a=a/2
    printf("a4 = %d\n", a);

    a %= 2;  // a=a%2
    printf("a5 = %d\n", a);

    return 0;
}
