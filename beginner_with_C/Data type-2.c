/* Write a program that takes an integer,floating number,double number,character and print that number */

#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    float num2;
    printf("Enter a floating point number: ");
    scanf("%f", &num2);
    printf("You entered: %f\n", num2);
    double num3;
    printf("Enter a double precision number: ");
    scanf("%lf", &num3);
    printf("You entered: %lf\n", num3);
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("You entered: %c\n", ch);
    return 0;
}
