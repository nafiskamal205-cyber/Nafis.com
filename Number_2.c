#include <stdio.h>
int main()
{
    int num;
    int positive = 0, negative = 0;

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &num);

      if(num > 0)
      {
         positive++;
      }
      else if(num < 0)
      {
         negative++;
      }
    }
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);

    return 0;
}
