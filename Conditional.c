#include <stdio.h>
int main()
{
    int num1,num2,large;

    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);

    large = (num1<num2) ? num2 : num1;
    printf("The large number is: %d\n",large);

    return 0;
}
