// program to add two numbers and calculate their average
#include <stdio.h>
int main()
{
      int num1,num2,sum;
      printf("Enter two numbers: "); 

      scanf("%d %d",&num1,&num2);
      sum=num1+num2;   // for add two numbers
      printf("Sum = %d\n",sum);
      float avg;
      avg= (float)sum/2; // type casting to float for average calculation
      printf("Average = %.2f\n",avg); 

      return 0;
}
