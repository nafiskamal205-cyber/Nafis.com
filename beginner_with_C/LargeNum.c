// Program to find the largest of two numbers
#include <stdio.h>
int main()
{
    int x,y;

    printf("Program to find the largest of two numbers\n");

    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of y: ");
    scanf("%d",&y);

    if(x>y)  // if x is greater than y
    {
        printf(" The largest number is %d\n",x);
    }
    else if(y>x)  // if y is greater than x
    {
        printf(" The largest number is %d\n",y);
    }

    else
    {
        printf("Both numbers are equal\n");
    }
        return 0;
}
