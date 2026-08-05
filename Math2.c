
#include <stdio.h>
#include <math.h>
int main()
{
    double x, result;

    printf("Enter a number to find its round value,truncate value,ceiling value and floor value\n x: ");
    scanf("%lf", &x);

    result = round(x); // Calculate the rounded value of the input number
    printf("Rounded value of x: %.2f is: %.2f\n", x, result);

    result = trunc(x); // Calculate the truncated value of the input number
    printf("Truncated value of x: %.2f is: %.2f\n", x, result);

    result = ceil(x); // Calculate the ceiling value of the input number
    printf("Ceiling value of x: %.2f is: %.2f\n", x, result);

    result = floor(x); // Calculate the floor value of the input number
    printf("Floor value of x: %.2f is: %.2f\n", x, result);

    return 0;
}
