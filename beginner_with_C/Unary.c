// This program demonstrates the use of unary operators in C, specifically the increment and decrement operators.
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter a value for x: ");
    scanf("%d", &x);


    y = x++; // Post-increment: y gets the value of x, then x is incremented
    printf("After post-increment, x = %d, y = %d\n", x, y);

    y = ++x; // Pre-increment: x is incremented, then y gets the value of x
    printf("After pre-increment, x = %d, y = %d\n", x, y);

    y = x--; // Post-decrement: y gets the value of x, then x is decremented
    printf("After post-decrement, x = %d, y = %d\n", x, y);

    y = --x; // Pre-decrement: x is decremented, then y gets the value of x
    printf("After pre-decrement, x = %d, y = %d\n", x, y);

    return 0;
}
