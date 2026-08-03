#include <stdio.h>
#include <math.h>
int main()
{
      float a,b,c,x1,x2;
      printf("Enter the value of a: ");
      scanf("%f",&a);

      printf("Enter the value of b: ");
      scanf("%f",&b);

      printf("Enter the value of c: ");
      scanf("%f",&c);

      x1=(-b+sqrt(b*b-4*a*c))/(2*a);
      x2=(-b-sqrt(b*b-4*a*c))/(2*a);

      printf("The roots of the quadratic equation are:\n");

      printf("x1 = %lf\n",x1);
      printf("x2 = %lf\n",x2);

      return 0;
}

