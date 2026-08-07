// This program checks if a number is even or odd
#include <stdio.h>
int main()
{
    int  x;
    printf("Enter a value for x: ");
    scanf("%d", &x);

     if (x%2 == 0)  // Check if x is even
          {
             printf("%d is even.\n", x);  // Print if x is even
          }
    else  // Check if x is odd
        {
           printf("%d is odd.\n", x);  // Print if x is odd
        }

     return 0;

}
