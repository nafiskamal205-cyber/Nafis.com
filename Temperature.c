#include <stdio.h>
int main()
{
      float C,F;
      printf("Enter the temperature in Celsius: ");
      scanf("%f",&C);

      F=(C*9/5)+32;  // formula for converting Celsius to Fahrenheit

      printf("Temperature in Fahrenheit is: %.2f\n\n",F);

      printf("Enter the temperature in Fahrenheit: ");
      scanf("%f",&F);

      C=(F-32)*5/9;  // formula for converting Fahrenheit to Celsius

      printf("Temperature in Celsius is: %.2f\n",C);

      return 0;
}
