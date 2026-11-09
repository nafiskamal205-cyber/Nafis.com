// Program to swap two numbers using a temporary variable
#include <stdio.h>
int main()
{
      int Num1, Num2, Temp; 
      printf("Enter the value of Num1: ");
      scanf("%d", &Num1); // Input value for Num1
     
      printf("Enter the value of Num2: ");
      scanf("%d", &Num2); // Input value for Num2
     
      Temp = Num1; // Store the value of Num1 in temp
      Num1 = Num2; // Assign the value of Num2 to Num1
      Num2 = Temp; // Assign the value stored in temp to Num2

      printf("Num1 = %d\n", Num1); // Output the swapped value of Num1
      printf("Num2 = %d\n", Num2); // Output the swapped value of Num2

      return 0;
}
