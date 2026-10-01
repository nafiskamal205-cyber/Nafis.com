#include <stdio.h>
int main()
{
   float a, b, c, perimeter;

   printf("Enter the value of side a: ");
    scanf("%f", &a);

    printf("Enter the value of side b: ");
    scanf("%f", &b);

    printf("Enter the value of side c: ");
    scanf("%f", &c);

    if(a > 0 && b > 0 && c > 0 &&
       a + b > c &&
       a + c > b &&
       b + c > a)

    {
        perimeter = a + b + c;

        printf("Thhe triangle is valid.\n");
        printf("Perimeter of triangle = %.2f\n", perimeter);
    }
    else
    {
        printf("Invalid triangle sides.\n");
    }

    return 0;

}
