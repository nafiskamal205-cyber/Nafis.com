// Program to demonstrate the use of the absolute function in C
#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for abs function

int main()
{
     int absolute,result;
     printf("Enter a number to find its absolute value: ");
     scanf("%d", &absolute);

     result = abs(absolute); // Calculate the absolute value of the input number

     printf("Absolute value of %d is: %d\n", absolute, result);

     return 0;
}
