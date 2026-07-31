// Arithmetic Operations in one program
#include <stdio.h>
int main()
{
      int num1,num2,result;
      printf("Enter two numbers: "); 
      scanf("%d %d",&num1,&num2);
      result=num1+num2;   // for add two numbers
      printf("Sum = %d\n",result); 

      result=num1-num2;   // for subtract two numbers
      printf("Subtraction = %d\n",result);

      result=num1*num2;   // for multiply two numbers
      printf("Multiplication = %d\n",result);

      result=num1/num2;   // for divide two numbers
      printf("Division = %d\n",result);

      result=num1%num2;   // for remainder of two numbers
      printf("Remainder = %d\n",result);

      return 0;
}
