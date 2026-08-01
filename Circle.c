// Program for calculating area of circle
#include <stdio.h>
#include <math.h> // Include math library for M_PI constant
int main()
{
     float radious,area;
     printf("Enter the value of radious: ");
     scanf("%f",&radious);

     area=M_PI*radious*radious;  // formula for area of circle
     printf("Area of circle is: %.2f",area);
     return 0;
}
