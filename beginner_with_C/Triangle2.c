// Program to calculate the area of a triangle using Heron's formula
#include <stdio.h>
#include <math.h>  // Include math library for sqrt function
int main()
{
      float a, b, c, s, area;
      printf("Enter the value of side a: ");
      scanf("%f", &a);
      printf("Enter the value of side b: ");
      scanf("%f", &b);
      printf("Enter the value of side c: ");
      scanf("%f", &c);

      s = (a + b + c) / 2; // semi-perimeter
      area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula for area of triangle

      printf("Area of triangle = %.2f\n", area);

      return 0;
}
