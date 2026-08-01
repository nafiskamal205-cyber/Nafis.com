// Program to calculate area of rectangle
#include <stdio.h>
int main()
{
      float length, width, area;
      printf("Enter length = ");
      scanf("%f", &length);

      printf("Enter width = ");
      scanf("%f", &width);

      area = length * width; // formula for area of rectangle
      printf("Area of rectangle = %.2f\n", area);

      return 0;
}
