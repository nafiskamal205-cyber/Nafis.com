// Program to demonstrate the use of goto statement in C
#include <stdio.h>
int main()
{
   int i = 1;

   nafis: // label used to jump to this point
          printf("%d\t",i); // use to print in tabular format
          i++;
          if(i<5)
          goto nafis;  // use to jump to the label nafis

          return 0;
}
