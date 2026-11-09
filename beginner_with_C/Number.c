// Number system conversion between Decimal, Octal and Hexadecimal
# include <stdio.h>
int main()
{
      int number;

      printf("Enter Decimal Number: "); 
      scanf("%d", &number); 

      printf("Octal Number: %o\n", number); 
      printf("Hexadecimal Number: %x\n\n", number); 

      printf("Enter Octal Number: ");
      scanf("%o", &number);

      printf("Decimal Number: %d\n", number); 
      printf("Hexadecimal Number: %x\n\n", number);

      printf("Enter Hexadecimal Number: ");
      scanf("%x", &number);

      printf("Decimal Number: %d\n", number);
      printf("Octal Number: %o\n", number);
      return 0;
}
