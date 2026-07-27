// This program converts a lowercase letter to uppercase and an uppercase letter to lowercase.
#include <stdio.h>
int main()
{
      char lower;
      printf("Enter a lowercase letter: ");
      scanf("%c",&lower);  // a=97
      printf("The uppercase letter is: %c\n",lower-32);   //A=65

      char upper;
      printf("Enter an uppercase letter: ");
      scanf(" %c",&upper);  // A=65
      printf("The lowercase letter is: %c\n",upper+32);   //a=97
      return 0;
}
